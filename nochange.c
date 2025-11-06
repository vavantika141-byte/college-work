//convert the first letter of the word to uppercase by keeping all the letters unchanged
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[1005];
    scanf("%s",&s);

    s[0]=toupper(s[0]);
    printf("%s",s);

    return 0;

}