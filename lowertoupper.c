//WAP to convert mix of uppercase and lowercase letters to either a whole uppercase letter word when the count of uppercase words are more in a word or to either into a whole lowercase letter word when the count of lowercase letters are moreif it is equal convert the whole word into lowercase.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[101];
    int i, upper=0, lower=0;
    scanf("%s", s);

    for(i=0; s[i]!='\0';i++)
    if (isupper(s[i]))  // isupper returns true if it's upper 
       upper++;
    else if(islower(s[i]))  // islower returns true if it's lower
        lower++;  

    if (upper>lower)
    for (i=0; s[i]!='0';i++)
        s[i]=toupper(s[i]); // converts all to upper

    else
    {
        for(i=0; s[i]!='\0';i++)
            s[i]=tolower(s[i]); //converts all to lower
    }  
    
    printf("%s",s);
    return 0;
}






