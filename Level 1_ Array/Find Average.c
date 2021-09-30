// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long long n, index,sum=0;
    scanf("%lld", &n);
    long long arr[n];
    for(int i=0; i<n;i++){
        scanf("%lld",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%lld",sum/n);
    return 0;
}
