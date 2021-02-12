
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr= NULL;
    int br=0;
    int sum=0;
    
    printf("Enter number of elements");
    scanf("%d", &br);
    arr=(int*)calloc(br* sizeof(int)); //zadelqme pamet koqto da e kolkoto razmeryt na vyvedenata stoinost
    for(int i=0; i< br; i++) { // za chetene na masiva 
        printf("Enter elements:%d ", i+1);
        scanf("%d",(arr+1));
        sum+=*(arr+1);
    }
    printf("sum of elements are:  %d ", sum);
    free(arr); // osvobojdavame pametta
    return 0;
}
