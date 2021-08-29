#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    printf("%d < %d is %d\n",num1,num2,num1 < num2);
    printf("%d > %d is %d\n",num1,num2,num1 > num2);
    printf("%d <= %d is %d\n",num1,num2,num1 <= num2);
    printf("%d >= %d is %d\n",num1,num2,num1 >= num2);
    printf("%d != %d is %d\n",num1,num2,num1 != num2);
    printf("%d == %d is %d",num1,num2,num1 == num2);
    return 0;
    
}
