/*#include<stdio.h>
struct emp
{
  int id;
  char name[30];
  float salary;
};

int main()
{
    struct emp e[10],temp;
    int i,j,n;

    printf("enter the no. of employees : ");
    scanf("%i",&n);
 
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of employee %i\n",i+1);
        printf("Enter name:  ");
        scanf("%s",&e[i].name);
        printf("Enter ID: ");
        scanf("%d",&e[i].id);
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
    }
    // no time skip print details of employees if needed.
    int id;
    printf("\n\nEnter ID of the empoyeee: ");
 
    scanf("%i",&id);


    // Search for the employee with the given ID
    int found = 0;
    for(i = 0; i < n; i++) 
    {
        if(e[i].id == id) 
        {
            // Employee found, print details
            printf("\nEmployee Found!\n");
            printf("Name: %s\n", e[i].name);
            printf("ID: %d\n", e[i].id);
            printf("Salary: %.2f\n\n", e[i].salary);
            found = 1;
            break;  // Exit loop once employee is found
        }
    }

    if (!found) 
    {
        printf("\nEmployee with ID %d not found.\n\n", id);  // If no employee matches the ID
    }

    return 0;

}*/


/*****************************************************************
experiment no:23
date:28/11/2024
name: jesbin shaju
class: s1 aiml
roll no: 40
aim: To write a cprogram of read data of n employees(name,employee,salary)using structue and then read employee id and print correspondin              details of  employee
******************************************************************/

#include<stdio.h>

 struct emp
{
  int id;
  char name[30];
  float salary;
};

int main ()
{
  struct emp e[10];
  int i,j,n;
  
  printf("Enter the number of employees: ");
  scanf("%i",&n);
  
  for(i=0;i<n;i++)
  {
    printf("\n\nEnter details of employee %i\n",i+1);
    
    printf("Enter name: ");
    scanf("%s",&e[i].name);
    
    printf("Enter ID: ");
    scanf("%i",&e[i].id);
    
    printf("Enter salary : ");
    scanf("%f",&e[i].salary);
  }
  
  int id;
  
  printf("\n\nEnter id of the employee to view details: ");
  scanf("%i",&id);
  
  int found=0;
  
  for(i=0;i<n;i++)
  {
    if(e[i].id==id)
    {
       printf("\n\n Employee found!\n");
       printf("Name: %s\n",e[i].name);
       printf("ID: %i\n",e[i].id);
       printf("Salary: %.2f\n",e[i].salary);
       found=1;
       break;
       
    }
       
  }
  
  if(found=0)
     printf("Employee not found!");
     
  return 0;
}