#include <stdio.h>
#include <math.h>
int main()
{
    double km,lt,avg;
    scanf("%lf%lf",&km,&lt);
    avg=km/lt;
    printf("Average consumption (km/lt) = %.2lf",avg);


    return 0;
}
