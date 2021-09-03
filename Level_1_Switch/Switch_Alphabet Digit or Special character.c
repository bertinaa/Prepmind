#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 65 ... 90: printf("Alphabet");break;
        case 97 ... 122:printf("alphabet");break;
        case 48 ... 57:printf("Digit");break;
        default:printf("Special Character");
    }
    return 0;
}
