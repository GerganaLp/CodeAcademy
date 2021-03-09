/*Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fopen(const char *restrict name, const char *restrict
                                               mode); //object from type FILE
    FILE *pfile = NULL;
    char *filename = "20210308_2.txt";
    pfile = fopen(filename, "wt"); //wt-отваряне на съществуващ текстов файл за запис. ако файлът липсва се създава. ако съществува се изтрива
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    //Затворете файла.
    fclose(pfile);
    pfile = NULL;
    //Преименувайте файла.
    int rename(const char *oldname, const char *newname);
    if (rename("C:\\Users\\Lenovo 330s\\codeAcademy\\20210308\\20210308_2.txt","C:\\Users\\Lenovo 330s\\codeAcademy\\20210308\\copy.txt"))
    {
        printf("Failed to rename file.");
    }
    else
        printf("File renamed successfully.");
    //Изтрийте файла.
    remove("20210308_2.txt");
    return 0;
}