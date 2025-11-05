#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, d, c = 0, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    num = n;

    if (n == 0)
        c = 1;   // special case for 0
    else
    {
        while (n != 0)
        {
            n = n / 10;
            c++;
        }
    }

    n = num;

    while (n != 0)
    {
        d = n % 10;
        sum = sum + (int)(pow(d, c) + 0.5);  
        n = n / 10;
    }

    if (sum == num)
        printf("Yes");
    else
        printf("No");

    return 0;
}
