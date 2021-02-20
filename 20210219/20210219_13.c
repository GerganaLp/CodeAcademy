/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник */


#include <stdio.h>
#include <string.h>
struct Employee{
  int id;
  char name[50];
  char middlename[50];
  char lastname[50];
  char position[50];
  int years;
  int salary;
  struct Employee *employee;
};
int main(){
    struct Employee workers[10];
    for (int i=0; i<10 ;i++){
        
        printf("Enter the employee's id: ");
        scanf("%d",&workers[i].id);
        printf("Enter employee's name ");
        scanf("%s", &workers[i].name);
        printf("Enter employee's middlename ");
        scanf("%s", &workers[i].middlename);
        printf("Enter employee's last name ");
        scanf("%s", &workers[i].lastname);
        printf("Enter employee's position ");
        scanf("%s", &workers[i].position);
        printf("Enter employee's years in company");
        scanf("%d" , &workers[i].years);
        printf("Enter employee's salary in leva ");
        scanf("%d", &workers[i].salary);
    }
   
} 
