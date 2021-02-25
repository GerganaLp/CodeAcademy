/* Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#include <stdio.h>
#include <math.h>
#define AVG(x, y) ((x+y)/2)
#define avg2(x,y){\
int n, i;\
    float sum = 0, x;\
    scanf("%d", &n);\
    for(i = 0; i < n; i++)\
    {\
        scanf("%f", &x);\
        sum += x;}\
    printf("\n\n\nAverage of the entered numbers is =  %f", (sum/n));}
#define POW(a,b) (pow(a, b))
#define TOUPPER(a) (a-32)
#define DISP(f, x) printf("Sqrt(%g) = %g\n", 3.0, sqrt(3.0))
int main (void)
{
   printf("AVG = %d\n", AVG(4, 8));
    printf("AVG2 = %d\n", avg2(5, 10));
   printf("POW = %d\n", POW(2, 3));
   printf("TOUPPER = %c\n", TOUPPER('g'));
   DISP(sqrt, 3.0);
return 0;
} 

