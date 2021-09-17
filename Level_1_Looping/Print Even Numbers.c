// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long num;
    scanf("%ld",&num);
    long i=2;
    while(i<=num){
        printf("%ld ",i);
        i+=2;
    }
    return 0;
}
