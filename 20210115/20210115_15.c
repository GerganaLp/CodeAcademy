#include <stdio.h>

void test()
{
    i++;
}
int main()
{
    static int s_iValue = 5;
    test();
    test();
    test();
    printf("%d", s_iValue);
    return 0;
}
