// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long n,pro=1, ld, temp;
    scanf("%ld",&n);
    temp = n;
    while (temp!=0){
        // ld- last digit, rev - reversed no
        ld = temp%10;
        pro = pro*ld;
        temp = temp/10;
    }
    printf("%ld",pro);
    return 0;
}
