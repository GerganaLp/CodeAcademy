/*Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто. */
 
#include <stdio.h>
 
int main()
{
  int i, number = 1, count; 
  
  printf(" Prime Number from 1 to 1000 are: \n"); 
  while(number <= 1000)
  {
    count = 0;
    i = 2;
    while(i <= number/2)
    {
      if(number%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && number != 1 )
    {
	printf(" %d ", number);
    }
    number++; 
  }
  return 0;
}