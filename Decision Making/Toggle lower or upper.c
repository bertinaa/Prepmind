#include<math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c",tolower(ch));
    }else{
        printf("%c",toupper(ch));
    }
    return 0;
}
