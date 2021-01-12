#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter number: ");
    scanf("%d", &num);

   
    printf("Enter nth bit to clear: ");
    scanf("%d", &n);

   
    newNum = num & (~(1 << n));

   
    printf("Number after clearing %d bit: %d \n", n, newNum);

    return 0;
}