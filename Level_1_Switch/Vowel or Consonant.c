#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        switch(ch)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case  'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':printf("Vowel");break;
            default : printf("Consonant");
        }
    }
    else
        printf("Not an alphabet");
    return 0;
}
