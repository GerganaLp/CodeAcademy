/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл */
#include<stdio.h>
int main()
{
    int x[10][10][10], sum=0, avg;
    int i;
    int *px, *psum, *pavg;

    px = &x[0];  //  ili  px = &x;
    psum = &sum, pavg = &avg;

    printf("Enter array Elements: ");
    for (i=0;i<10;i++)
    {
        scanf("%f",(px+i));
        *psum += *(px + i);
    }

    *pavg = *psum / 5;
    printf("Sum= %.2f \t Average= %.2f\n", *psum, *pavg);

    return 0;
}
