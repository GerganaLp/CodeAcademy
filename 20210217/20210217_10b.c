/*Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто */
#include <stdio.h> 

main() {
  int n, i, counter = 0;
  printf("Enter number:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         counter++;
      }
  }

  if (counter == 2) {
  printf("number is prime");
  }
  else {
  printf("number is not prime");
  }
  return 0;    
}