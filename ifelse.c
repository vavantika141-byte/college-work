/*Control Statement
1) if statement
if u write ; after if then it means u are terminating the statements but then all also the statements of if blocks are executed

2) if else statement
if block contains all true statements
and else block contains all false statements

3)nested if 
syntax-
if(condition1)
{
   if(condition 2)
    {
    inner if block statements
    }
    else
    {
    inner else block statements
    }
}
else 
{
outer else block statements
}  


*/

#include<stdio.h>
int main()
{
    int n;  

    printf("Enter the number = ");
    scanf("%d",&n);
    if(n>0 )/*  don't use semicolon as it will execute all the statements inside the block even when the condition is false*/
    {
        printf("The number  is  %d\n", n);
        printf("It is a positive number\n   ");
        if(n%2==0)
        {
            printf("It is even number\n");
        }
        else
        {
            printf("It is a odd number");
        }
    }

    else if (n<0)
    {
        printf("It is a negative number\n");
        
    }
    else{
        printf("It is 0\n");
    }
    printf("out of if else statement\n");
    return 0;


}
