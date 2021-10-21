
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long num1,num2;
    scanf("%ld %ld",&num1,&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    /*a = 10, b = 5;
     a = 15
     b= 10
     a = 5
    */
    printf("%ld %ld",num1,num2);
    return 0;
}
