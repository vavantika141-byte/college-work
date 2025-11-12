#include <stdio.h>
#include <math.h>

int main()
{
    int a, b,n,num, d ,count, sum ;
    printf("Enter range: "); 
    scanf("%d%d", &a, &b);

    for (int n=a; n<=b; n++)
    {
        int num=n;
        count = floor(log10(n)) + 1;
        sum=0;
 
        while (num >0)
        { 
            int d = num % 10;
            sum=sum + pow(d,count);
            num/=10;
        }

        if (sum==n)
            printf("\n %d",n);
    }

    return 0;
}
