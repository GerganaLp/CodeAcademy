/*Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    int c;
    fp = fopen("file3.txt", "rt"); //rt-отваряне на съществуващ текстов файл за четене
    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF) //fgetс- взима само един чар ан файла
        printf("%c", c);
    fclose(fp);
    fp = NULL;
    return 0;
}