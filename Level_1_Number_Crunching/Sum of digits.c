// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long n,sum, ld, temp;
    scanf("%ld",&n);
    temp = n;
    while (temp!=0){
        // ld- last digit, rev - reversed no
        ld = temp%10;
        sum = sum+ld;
        temp = temp/10;
    }
    printf("%ld",sum);
    return 0;
}
