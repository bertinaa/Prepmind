#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, square, cube;
    scanf("%d",&num);
    square=num*num;
    cube=square*num;
    printf("Square = %d\nCube = %d",square,cube);

    return 0;
}
