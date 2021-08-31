#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double gross;
    gross=((n/100)*60)+n;
    printf("Gross Salary is %.0lf",gross);



    return 0;
}
