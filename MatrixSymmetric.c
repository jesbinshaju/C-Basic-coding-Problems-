#include<stdio.h>
int main()
{
    int matrix[40][40];
    int i,j,n;
    int symmetric=1;

    printf("The siz of the square matrix:  ");
    scanf("%i",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
          printf("Enter the element in matrix[%i][%i]: ",i+1,j+1);
          scanf("%i",&matrix[i][j]);
    }
    }

    printf("Your originalmatrix: \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
          printf( "%i  ",matrix[i][j]);

          if(matrix[i][j]!=matrix[j][i])
            symmetric=0;
          
    }
    printf("\n");
    }

    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            symmetric=0;
        }
    }*/

    if(symmetric==0)
    {
        printf("It is a not symmmetric matrix;");
    }
    else 
    {
        printf("It i a symmetric matrix");
    }
}