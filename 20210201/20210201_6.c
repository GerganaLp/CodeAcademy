/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30*/
#include <stdio.h>
unsigned long long int product();
int main(void)
{
  printf("%lu", product());

  return 0;
}
unsigned long long int product()
{
  int i;
  unsigned long long int res = 1;
  for (i = 1; i <= 30; i++)
  {
    res = res * i;
  }
  return res;
}