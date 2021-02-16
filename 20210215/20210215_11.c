/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;                          
    int *ptr1, *ptr2;                        
    int mul;                                 
    printf("Please enter value for num1: "); 
    scanf("%d", &num1);                      
    printf("Please enter value for num2: "); 
    scanf("%d", &num2);                      
    ptr1 = &num1;                            
    ptr2 = &num2;
    mul = *ptr1 * *ptr2;                                     
    printf("Product of the two integer values is: %d", mul); 
  
    return 0;
}