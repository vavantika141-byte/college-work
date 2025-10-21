#include <stdio.h>

int main()
{
    char ch, upper;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to uppercase
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch >= 'a' && ch <= 'z')
        {
            upper = ch - 32;  // convert lowercase to uppercase
        }
        else
        {
            upper = ch;  // already uppercase
        }
        printf("Uppercase: %c\n", upper);
    }
    else
    {
        printf("Not an alphabet character.\n");
    }
    return 0;
}
