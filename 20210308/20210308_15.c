/*Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред */
#include <stdio.h>
#include <errno.h>

long count_characters(FILE *);

void main()
{
    int i;
    long count;
    char ch, ch1;
    FILE *fp1, *fp2;

    if (fp1 = fopen("File_1.txt", "r"))
    {
        printf("The FILE has been opened...\n");
        fp2 = fopen("File_2.txt", "w");
        count = count_characters(fp1);

        // поинтера на fp1 го правя последния символ на файла
        fseek(fp1, -1L, 2);
        printf("Number of characters to be copied %d\n", ftell(fp1));

        while (count)
        {
            ch = fgetc(fp1);
            fputc(ch, fp2);
            fseek(fp1, -2L, 1); // поинтера до предпоседния символ
            count--;
        }
        printf("\n**File copied successfully in reverse order**\n");
    }
    else
    {
        perror("Error occured\n");
    }
    fclose(fp1);
    fclose(fp2);
}

// брои всички символи във файла
long count_characters(FILE *f)
{
    fseek(f, -1L, 2);
    long last_pos = ftell(f);
    last_pos++;
    return last_pos;
}