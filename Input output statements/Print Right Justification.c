#include <stdio.h>
#include <stdlib.h>
int main()
{

    //program to accept a number and right justify with 15 columns
    //num in test cases is in the range of [0-10^18]
    long num;
    scanf("%ld",&num);
    printf("%15ld",num);



    return 0;
}
