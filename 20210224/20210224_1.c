/******************************************************************************

 Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
*******************************************************************************/

#include <stdio.h>

#define PI 3.141592653
#define E 2.718281828
int main(void)
{
    double test = PI * E;
    printf("PI * E = %f", test);


    return 0;
}
