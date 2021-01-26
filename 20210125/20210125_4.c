//Напишете програма, която копира входа си на изхода, като
//замества всеки низ от една или повече шпации, с една
//единствена шпация. 
#include <stdio.h>
int main(void)
{
    char c;
    int flag = 1;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (flag == 1 && c == ' ')
            {
                continue;
            }
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        putchar(c);
    }
    return 0;
}
