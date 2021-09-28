// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num, units,hundreds, tens,thousands;
    
    scanf("%d",&num);
    units=(num);
    tens=(num/10);
    hundreds=(num/100);
    thousands= (num/1000);
    printf("Number of units : %d\n",units);
    printf("Number of tens : %d\n",tens);
    printf("Number of hundreds : %d\n",hundreds);
    printf("Number of thousands : %d\n",thousands);
    return 0;
}
