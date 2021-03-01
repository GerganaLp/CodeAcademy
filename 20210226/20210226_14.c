
/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#include <stdio.h>
#include <stdlib.h>

/*structure declaration*/
typedef struct
{
    char name[100], surname[100];
    int age, id;

} student;

int main()
{
    student *pointer = NULL;
    int n, i;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    /*Allocate memory dynamically for n objetcs*/
    pointer = (struct student *)malloc(n * sizeof(student));

    /*read and print details*/
    for (i = 0; i < n; i++)
    {
        printf("\nEnter detail of student [%3d]:\n", i + 1);
        printf("Enter name: ");
        scanf(" "); /*clear input buffer*/
        gets((pointer + i)->name);
        printf("Enter surname number: ");
        gets((pointer + i)->surname);
        printf("Enter age: ");
        scanf("%f", &(pointer + i)->age);
        printf("Enter id: ");
        scanf("%f", &(pointer + i)->id);
    }

    printf("\nEntered details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%30s \t %30s \t %d \n", (pointer + i)->name, (pointer + i)->surname, (pointer + i)->age, (pointer + i)->id);
    }

    return 0;
}