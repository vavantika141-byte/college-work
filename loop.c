#include<stdio.h>
int main()
{
    int i=1;
    int num;
    
    printf("Enter the number:  ");
    scanf("%d",&num);

    for (; i<=num;)
    {
        printf("%d\n",i);
        i++;
    }
}