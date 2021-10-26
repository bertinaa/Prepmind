// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long n;
    scanf("%ld", &n);
    long rev = 0;
    int temp = n;
    while (temp!=0)
    {
        int ld = temp%10;
        rev = (rev *10) +ld;
        temp = temp/10;
    }
    printf("%ld",rev);
    return 0;
}
//no need for temp, you can directly do with n instead of temp
