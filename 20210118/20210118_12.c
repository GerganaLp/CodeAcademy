#include <stdio.h>
int main()
{
    int nX = 3; 
    int nY = 20;
    scanf("%d", &nX);
    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    
    if (nX != nY)
    {
        printf("%d is not equal %d\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY)
    {
        printf("%d is greater than %d\n", nY, nX);
    }
    if (nX >= nY)
    {
        printf("%d is greater than or equal %d\n", nX, nY);
    }
    if (nX <= nY)
    {
        printf("%d is greater than or equal %d\n", nY, nX);
    }
    return 0;
}