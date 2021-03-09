/*Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време */

#include <stdio.h>
int main()
{
    FILE *fp;
    long int position;
    fp=open("test10.txt","r");
    fputs("Hello",fp);
    if(fp!=NULL){
       position=ftell(fp);
    }
    printf("File size: %d\n",position);
    fclose(fp);
    return 0;
}