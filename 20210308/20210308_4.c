/*Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла; */
#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char str[60];
    fp = fopen("file.txt", "rt");//за четене ако файла съществува
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    if (fgets(str, 60, fp) != NULL) //взимаме 60 символа от стринг str във файла fp
    {
        printf("%s", str);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}