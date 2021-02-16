/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */

#include<stdio.h>
main()
{
    int mystrlen(char *);
    char str[100];
    char *p;
    p=str;
    printf("Enter the string: \n");
    scanf("%s",p);
    int x=mystrlen(p);
    printf("Length of string is=%d\n",x);


}
int mystrlen(char *p)
{
    int c=0;
    while(*p!='\0')
    {
        c++;
        *p++;
    }
    return(c);
}