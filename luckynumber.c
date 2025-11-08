#include <stdio.h>
int main() 
{
    char s[30];
    if (scanf("%29s",s)!=1) return 0;

    int cnt=0;
    for (int i=0;s[i]!='\0';++i) 
    {
        if (s[i]=='4' || s[i]=='7') cnt++;
    }

    if (cnt==0) {
        printf("No\n");
        return 0;
    }
    int tmp=cnt;
    while (tmp>0) {
        int d=tmp%10;
        if (d!=4 && d!=7) {
            printf("No\n");
            return 0;
        }
        tmp/=10;
    }

    printf("Yes\n");
    return 0;
}
