/* Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */
#include <stdio.h>
int triangle(int a, int b);
int quadrilateral(int a,int b);
int main(void){
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("Triangle area = %d sm\n",triangle(a,b));
    printf("Rectangle area = %d sm",quadrilateral(a,b));

    return 0;
}
int triangle(int a,int b){
    return (a*b)/2;
}
int quadrilateral(int a,int b){
    return 2*triangle(a,b);
}