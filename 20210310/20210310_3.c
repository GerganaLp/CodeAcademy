/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл */
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAXLENGHPAGE 10
void numpages(FILE*, FILE*);
int main(int argc, char *argv[]){
      FILE *fp;
    char *prog = argv[0];
    int linecount = 0;

    if (argc == 1) /* no args; copy standard input */
    {
        fprintf(stderr, "No files given");
        numpages(stdin, stdout);
    }
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: can't open %s\n",
                        prog, *argv);
                exit(1);
            } else {
                fprintf(stdout, "\n\n\t\t\tFile: %s\n\n", *argv);
                numpages(fp, stdout);
                fclose(fp);
            }

    if (ferror(stdout)) {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    exit(0);
}
void numpages(FILE* fd1,FILE* fd2){
    int c;
    int line=0;
    int page=1;
    while((c=getc(fd1))!= EOF){
        putc(c,fd2);
        if(c=='\n'){
            line++;
            if(line==MAXLENGHPAGE){
                 fprintf(stdout, "\n\t\t\tPage %d End.\n\n", page);
                page++;
                line = 0;
            }
        }
    }
}