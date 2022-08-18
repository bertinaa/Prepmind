#include<stdio.h>
int main()
{
    // %% prints a single %
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b,a,b,a%b);
    return 0;
}
