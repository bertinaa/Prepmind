#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double gross;
    /*gross=((n/100)*60)+n;
    we can't do 40/100 because that will mean that the answer is 0
    */
    gross = n+ 40*n/100 + 20*n/100;
    printf("Gross Salary is %.0lf",gross);



    return 0;
}
