/* Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
} */

int sum(int *arr, int size);

int main()
{
    int arr[5] = {1,2,3};
    printf("The sum of elements is: %d\n", sum(arr, 3));
    return 0;
}

int sum(int *arr, int size)
{
    int sum = 0;
    int *ptr = arr + size;
    while (arr < ptr)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}
