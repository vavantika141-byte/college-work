/*
pattern for rectangular pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// upper triangular pattern 
#include<stdio.h>
int main()
{
    int i,j,n;  
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

//code for upper triangular
#include<stdio.h>
int main()
{
    int i,j,n,p;  
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (p=1;p<=n-i;p++)
           {
            printf(" ");
           }
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

