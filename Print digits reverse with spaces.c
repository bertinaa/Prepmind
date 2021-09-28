
#include <stdio.h>

int main() {
    // Write C code here
    long n,rev, ld, temp;
    scanf("%ld",&n);
    temp = n;
    while (temp!=0){
        // ld- last digit, rev - reversed no
        ld = temp%10;
        printf("%ld ",ld);
        temp = temp/10;
    }
    return 0;
}
