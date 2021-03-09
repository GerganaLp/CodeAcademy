/*Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете. */


#include <stdio.h>
int main()
{   
    FILE *fp;
    int counter=0;// broi redovete 
    int lines=0;
    fp=open("file13.txt","r");
    if(fp==NULL){
        perror("Error");
        return -1;
    }
    while(!feof(fp)){
        lines=fgetc(fp);
        if(lines=='\n'){
            counter++;
        }
    }

    return 0;
}