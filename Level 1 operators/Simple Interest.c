#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int amount,rate,years,SI;
    scanf("%d%d%d",&amount,&rate,&years);
    SI=(amount*rate*years)/100;
    printf("%d",SI);

    return 0;
}
