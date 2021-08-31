#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf %lf",&a,&b);
    //decimalpart=modf(number,&intpart)
    c=modf(a,&e);
    d=modf(b,&f);
    //so here e and f are the integer part of a and b respectively.
    printf("%.2lf + %.2lf = %.2lf",c,d,c+d);

    return 0;
}
