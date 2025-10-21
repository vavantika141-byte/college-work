# include <stdio.h>
int main() 
{
    // check the type of triangle

    
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
        printf("The triangle is equilateral.\n");
    else if(a==b || b==c || c==a)
        printf("The triangle is isosceles.\n");
    else
        printf("The triangle is scalene.\n");
}