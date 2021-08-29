#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,sum,diff,product,quot,rem;
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quot=num1/num2;
    rem=num1%num2;
    printf("Sum : %d\nDifference : %d\nProduct : %d\nQuotient : %d\nRemainder : %d",sum,diff,product,quot,rem);
    

    return 0;
}
