
 
#include <stdio.h>
#include <stdlib.h>
 
/*structure declaration*/
struct student
{
    char name[100], surname[100];
    int age,id;
   
};
 
int main()
{
    struct student *pstd;
    int n,i;
     
    printf("Enter total number of students: ");
    scanf("%d",&n);
     
    /*Allocate memory dynamically for n objetcs*/
    pstd=(struct student*)malloc(n*sizeof(struct student));
     
    if(pstd==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }
     
    /*read and print details*/
    for(i=0; i<n; i++)
    {
        printf("\nEnter detail of student [%3d]:\n",i+1);
        printf("Enter name: ");
        scanf(" "); /*clear input buffer*/
        gets((pstd+i)->name);
        printf("Enter surname number: ");
        gets((pstd+i)->surname);
        printf("Enter age: ");
        scanf("%f",&(pstd+i)->age);
         printf("Enter id: ");
        scanf("%f",&(pstd+i)->id);
    }
     
    printf("\nEntered details are:\n");
    for(i=0; i<n; i++)
    {
        printf("%30s \t %30s \t %d \n",(pstd+i)->name,(pstd+i)->surname,(pstd+i)->age,(pstd+i)->id);
    }
      
    return 0;
}
