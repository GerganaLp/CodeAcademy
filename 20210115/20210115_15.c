#include <stdio.h>
void test();
int main()
{
  
    test();
    test();
    test();
  
}
void test()
{
    static int s_iValue=1;
    s_iValue++;
    printf("%d \n",s_iValue);
}
