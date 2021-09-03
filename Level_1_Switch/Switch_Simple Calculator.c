#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    char op;
    scanf("%d%d\n%c",&a,&b,&op);
    switch(op){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
    }


    return 0;
}
