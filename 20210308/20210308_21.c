/*Напишете стандартната програма за Linux wc, която приема име на
файл като аргумент от командния ред и изкарва на стандартния изход
стринга "Брой думи: ", последван от броя думи във файла. Програмата да
приема три вида аргументи:
 -c - който да изкарва "Брой символи: "
 -l - който да изкарва "Брой редове: "
 -w - който е за брой думи(тоест стандартното поведение на
програмата)
Ако един два или три от тези аргументи са подадени да не се взема
предвид стандартното поведение.
 Примери:
 > wc f1 // изкарва броя думи
 > wc -с f1 // изкарва броя символи
 > wc -l f1 // изкарва само броя редове
 > wc -c -w f1 // изкарва броя символи и броя думи във f1 */

#include <stdlib.h>
#include <stdio.h>

static unsigned long total_byte_count = 0, total_line_count = 0;

static void wc(FILE *input_file, const char *filename)
{
    char buffer;
    unsigned long byte_count = 0, line_count = 0;
    while (fread(&buffer, sizeof(char), 1, input_file), !feof(input_file))
    {
        if (ferror(input_file))
        {
            perror("fread");
            exit(EXIT_FAILURE);
        }

        byte_count++;
        if ('\n' == buffer)
            line_count++;
    }

    if (NULL == filename)
        printf(" %ld %ld\n", line_count, byte_count);
    else
        printf(" %ld %ld %s\n", line_count, byte_count, filename);

    total_byte_count += byte_count;
    total_line_count += line_count;
}

int main(int argc, const char *const *argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            FILE *input_file = fopen(argv[i], "r");
            if (NULL == input_file)
            {
                perror("fopen");
                exit(EXIT_FAILURE);
            }

            wc(input_file, argv[i]);

            if (EOF == fclose(input_file))
            {
                perror("fclose");
                exit(EXIT_FAILURE);
            }
        }
    }
    else
        wc(stdin, NULL);

    printf(" %ld %ld total\n", total_line_count, total_byte_count);

    return EXIT_SUCCESS;
}