#include<math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("UPPER");
    }else{
        printf("lower");
    }
    return 0;
}
