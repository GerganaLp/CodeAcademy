/*Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#include <stdio.h>
#include <stdlib.h>

/*structure declaration*/
typedef struct student
{
    char *name, *surname;
    int age, id;

} student;

int main()
{
    student *pointer = NULL;
    int n, i;
    FILE *fp;
    if ((fp = fopen("test17.txt", "wt")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
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
        scanf("%s", pointer[i].name);
        printf("Enter surname number: ");
       scanf("%s", pointer[i].surname);
        printf("Enter age: ");
       scanf("%s", pointer[i].age);
        printf("Enter id: ");
       scanf("%s", pointer[i].id);
    }

    printf("\nEntered details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%30s \t %30s \t %d \n", pointer[i].name, pointer[i].surname,pointer[i].age, pointer[i].id);
    }
    free(pointer);
    fclose(fp);
    return 0;
}