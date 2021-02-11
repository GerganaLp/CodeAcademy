/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
} */


#include <stdio.h> 
void sort(int n, int* ptr);
int main(void) 
{ 
    int n = 5; 
    int arr[] = { 10, 23, 17, 29, 24 }; 
  
    sort(n, arr); 
  
    return 0; 
} 
void sort(int n, int* ptr) 
{ 
    int i, j, t; 

    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    }
    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
} 
  
