#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter range: ");
    scanf("%d%d", &a, &b);

    for (int n=a; n<=b; n++)
    {
        int num=n;
        int count = floor(log10(n)) + 1;
        int sum=0;
 
        while (num != 0)
        { 
            int d = num % 10;
            sum+=pow(d,count);
            num/=10;
        }

        if (n==sum)
            printf("\n %d",n);
    }

    return 0;
}
