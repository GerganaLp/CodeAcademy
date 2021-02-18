/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */
#include <stdio.h>
#include <stdlib.h>
void add(int a, int b) { return a + b; };
void fun2(int a, int b) { return a - b; };
void fun3(int a, int b) { return a * b; };
void func4(int a, int b) { return a / b; }
int (*func_ptr[4])() = {add, fun2, fun3, func4};
int main(int argc, char *argv[])
{
    printf("Choose: ");
    printf("For plus type 0\n");
    printf("For minus type 1\n");
    printf("For multiply type 2\n");
    printf("For divide type 3\n");
    int choice = 0;
    scanf("%d", &choice);
    printf("Type 2 numbers: \n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n", func_ptr[choice](x, y));
    return 0;
}