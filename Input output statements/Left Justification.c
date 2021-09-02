#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    //program to accept a number and right justify with 15 columns
    //num in test cases is in the range of [0-10^18]
    int num;
    scanf("%lld",&num);
    printf("%-15lld",num);



    return 0;
}
