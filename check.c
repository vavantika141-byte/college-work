#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check for alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet.\n", ch);

        // Check for vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    // Check for digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.\n", ch);
    }
    // Check for space
    else if (ch == ' ')
    {
        printf("You entered a space.\n");
    }
    // Check for special character
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
