/*Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход */
#include<fcntl.h>
#include<stdio.h>

int main(int argc, char* argv[])
{

    for(int i = 1; i < argc; i++)  {
        int fd = open(argv[i],O_RDONLY);
        if(fd==-1) {
            printf("There was an error\n");
            return 1;
        }
        char byteBuff[1];
        while(read(fd,byteBuff,1) > 0)
            {
            write(1, byteBuff,1);
            }
        close(fd);
        }
    return 0;
}