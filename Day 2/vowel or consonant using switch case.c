#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) 
	{
        ch = tolower(ch);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("The character '%c' is a vowel.\n", ch);
                break;

            default:
                printf("The character '%c' is a consonant.\n", ch);
        }
    } else {
        printf("The input '%c' is not a letter.\n", ch);
    }

    return 0;
}

