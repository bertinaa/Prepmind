#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letter;
    int num;
    long numb, number;
    double deci;
    scanf("%c%d%lld%lld%lf",&letter,&num,&numb,&number,&deci);
    printf("%c\n%d\n%lld\n%lld\n%.3lf",letter,num,numb,number,deci);

    return 0;
}
