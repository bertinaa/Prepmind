//C program to find number of digits
#include <stdio.h>

int main() {
    // Write C code here
    long n;
    int count=0;
    scanf("%ld",&n);
    while(n>0){
        n=n/10;
        ++count;
    }
    printf("%d",count);
    return 0;
}
