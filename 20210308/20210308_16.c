/*Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    int num_line = 0;
    int delete;
    char character;
    fp1 = fopen("text14.txt", "r"); //входния файл за четене
    if (fp1 == NULL)
    {
        perror("Error");
        return -1;
    }
    fp2 = fopen("temp.txt", "w"); //изходния файл за писане
    if (fp2 == NULL)
    {
        perror("Error");
        return -1;
    }
    printf("Enter line number to delete ");
    scanf("%d", &delete);
    character = getc(fp1);
    if (character != EOF)
    {
        num_line = 1;
    }
    while (1)
    {
        if (delete != num_line)
        {
            putc(character, fp2);
            character = getc(fp1);
            if (character == "\n")
            {
                num_line++;
            }
            if (character == EOF)
            {
                break;
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}