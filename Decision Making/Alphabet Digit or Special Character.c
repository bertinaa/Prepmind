#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
        printf("Alphabet");
    }else if(ch>47 && ch< 58){
        printf("Digit");
    }else{
        printf("Special Character");}
    return 0;
}
