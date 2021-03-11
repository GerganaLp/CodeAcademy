//Напишете програма, която сравнява два файла, като отпечатва
//първият ред на който се различават и на двата файла.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void compare(FILE *fd1, FILE *fd2);
int main(int argc, char *argv[])
{
    FILE *fd1, *fd2;
    if (argc > 3)
    { //ot 3 zashtoto imame 2 faila i program name
        fprintf(stderr, "\n Failed to open IN/OUT files\n");
        exit(1);
    }
    else
    {
        if ((fd1 = fopen("text1.txt", "r")) == NULL)
        {
            perror("Error");
            return -1;
        }
        else if ((fd2 = fopen("text1a.txt", "r")) == NULL)
        {
            perror("Error");
            return -1;
        }
        else
        {
            compare(fd1, fd2);
            fclose(fd1);
            fclose(fd2);
            exit(0);
        }
    }
}
    void compare(FILE * fd1, FILE * fd2)
    {
        char line1[40], line2[40];
        char *l1, *l2; //pointers kym redovete
        do
        {
            //vzima string ot failovete
            l1 = fgets(line1, 40, fd1);
            l2 = fgets(line2, 40, fd2);
            if (l1 == line1 && l2 == line2)
            {
                if (strcmp(line1, line2) != 0)
                { //strcmp sravnqva dvata reda
                    printf("there is difference in line \n %s\n", line1);
                    l1 = l2 = NULL;
                }
            }
            else if (l1 != line1 && l2 != line2)
                printf("Ending first file\n %s\n", line2);
            else if (l1 == line1 && l2 != line2)
                printf("Ending second file\n%s\n", line1);

        } while (l1 == line1 && l2 == line2);
    }