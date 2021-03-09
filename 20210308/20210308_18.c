/*Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин.*/
#include <stdio.h>
static const char *FORMAT_PERSON_IN = "(%[^,], %d, %c)\n";
static const char *FORMAT_PERSON_OUT = "(%s, %d, %c)\n";
typedef struct Person
{
    char name[20];
    int age;
    char gender;
} t_person;
int main()
{
    t_person g = {
        .name = "Gergana",
        .age = 22,
        .gender = 'F'};
    t_person dm;
    FILE *fp;
    fp = fopen("text18.xml", "w+");
    if (NULL == fp)
    {
        return 1;
    }
    fprintf(fp, FORMAT_PERSON_OUT, g.name, g.age, g.gender);
    fseek(fp, 0, SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, dm.name, &dm.age, &dm.gender);
    printf(FORMAT_PERSON_OUT, dm.name, dm.age, dm.gender);
    fclose(fp);
    return 0;
}