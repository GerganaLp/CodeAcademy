/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include <stdio.h>
int max(int *arr);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    printf("%d", max(arr));

    return 0;
}
int max(int *arr)
{
    int max = 0;
    while (*arr)
    {
        if (*arr > max)
        {
            max = *arr;
        }
        arr++;
    }
    return max;
}