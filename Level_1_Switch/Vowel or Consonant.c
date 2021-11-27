#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    ch = toupper(ch);
    if(ch>=65 && ch<=90)
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Vowel");
                break;
            default : printf("Consonant");
        }
    }
    else
        printf("Not an alphabet");
    return 0;
}
