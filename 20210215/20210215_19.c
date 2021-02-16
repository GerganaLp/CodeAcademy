/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“ */
#include <stdio.h>
#include <string.h>
int main(void)
{

    char string[] = "Baba, kaka, mama";
    char *p = string;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a')
        {
            string[i] = 'o';
        }
    }
    printf("%s\n", string);
    return 0;
}