/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи */

#include<stdio.h>
#include<stdlib.h>
int c=0;
int linearsearch(int *, int,int);
int linearsearch(int *a,int b,int  n)
{
    int i;
for(i=0;i<=n-1;i++)
    {
         if(*(a+i)==b)
       {
             c=1;
             break;
         }
    }
    return i;
 
}
 
int main()
{
    int *a,i,n,m;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
 
    printf("Enter the elements of the array: ");
    for(i=0;i<=n-1;i++)
    {
         scanf("%d",(a+i));
    }
 
    printf("Enter the number to be search: ");
    scanf("%d",&m);
    i=0;
    i=linearsearch(a,m,n);
     
    if(c==0)
         printf("The number is not in the list\n");
    else
         printf("The number is found at position %d\n",i+1);
 
    return 0;
}
