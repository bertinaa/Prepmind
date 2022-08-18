#include<stdio.h>
int main()
{
    int N, hund, fif, twe, tens, fiv, two,one;
    scanf("%d",&N);
    int temp = N;
    hund= temp / 100;
    temp = temp %100;
    fif = temp / 50;
    temp = temp % 50;
    twe = temp /20;
    temp = temp %20;
    tens = temp /10;
    temp = temp %10;
    fiv = temp/5;
    temp = temp % 5;
    two = temp/2;
    temp = temp %2;
    one = temp %10;
    printf("%d Note(s) of 100.00\n%d Note(s) of 50.00\n%d Note(s) of 20.00\n%d Note(s) of 10.00\n%d Note(s) of 5.00\n%d Note(s) of 2.00\n%d Note(s) of 1.00",hund,fif,twe,tens,fiv,two,one);
    return 0;
}
