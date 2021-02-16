#include <stdio.h>
char *month_name(int n);
int main(void)
{
    int x=10;
    char *n=month_name(x);
    printf("Month is: %s \n ", n);
   
    return 0;
}
char *month_name(int n)
{

    static char *name[] = {
        "Illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
   return name[n];
}