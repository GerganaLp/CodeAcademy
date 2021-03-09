/*Haправете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

#include <stdio.h>
int main()
{
    FILE *fp;
    fpos_t position; //fpos_t се използва за съхраняване (от fgetpos) и възстановяване (от fsetpos) на позицията
    fp=open("text11.txt","r");
    if(fp==NULL){
        perror("Error");
        return -1;
    }
    fputs("jchdsj",fp);
    fgetpos(fp,&position);
    fclose(fp);

    return 0;
}