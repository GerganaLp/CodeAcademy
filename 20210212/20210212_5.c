#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *array = NULL;
    array = malloc(5*sizeof(*array));
    if (array == NULL)
    {
        printf("Memory allocation error\n");
        exit(1);
    }
    /* Now array has 5 entries, from 0 to 4 */
    array[0] = array[1] = array[2] = array[3] = array[4] = 0;
    array = realloc(array, 10*sizeof(*array));
    if (array == NULL)
    {
        printf("Memory allocation error\n");
        exit(1);
    }
    /* Now array has 10 entries, from 0 to 9 */
  printf("Addres of realocated memory: %p\n",array);
    free(array);
    array = NULL;
}
