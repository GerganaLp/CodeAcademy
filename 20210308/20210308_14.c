/*Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char charachters;               //запазва прочетените символи
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
    while ((charachters = fgetc(fp1)) != EOF)
    {
        if (islower(charachters))
        {
            charachters = charachters - 32;
        }
        putc(charachters, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    //преименуване на новия файл с името на оригиналния
    rename("text14.txt", "temp.txt");
    remove("text14.txt");
    //отпечатване на съдържанието с главни букви
    fp1 = open("text14.txt", "r");
    if (fp1 == NULL)
    {
        perror("Error");
        return -1;
    }
    printf("Content of file is: ");
    while ((charachters = getc(fp1)) != EOF)
    {
        printf("%c", charachters);
    }
    printf("\n");
    fclose(fp1);
    return 0;
}