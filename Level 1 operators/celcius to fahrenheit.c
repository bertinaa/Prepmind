#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double celcius,fah;
    scanf("%lf",&celcius);
    fah=(celcius*9/5)+32;
    printf("%.3lf",fah);

    return 0;
}
