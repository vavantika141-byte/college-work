#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i=1; i<=(n/2);i++)
    {
        if(n%i==0)
        sum=sum+i;
    }

    if(sum==n)
    {
         printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
}