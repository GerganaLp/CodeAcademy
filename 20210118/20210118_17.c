#include <stdio.h>
void generatorRandomNumber()
{
    int A = 1;
    A ^= A << 13;
    printf("%d\n", A);
    A ^= A >> 17;
    printf("%d\n", A);
    A ^= A << 5;
    printf("%d\n", A);
}

void generatorRandomLongLongNumber()
{
    long long int A = 123456789;
    A ^= A << 13;
    printf("%lld\n", A);
    A ^= A >> 17;
    printf("%lld\n", A);
    A ^= A << 5;
    printf("%lld\n", A);
}

int main(void)
{
    generatorRandomNumber();
    printf("\n");
    generatorRandomLongLongNumber();
    return 0;
}