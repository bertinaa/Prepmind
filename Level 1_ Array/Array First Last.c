// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long long n, index;
    scanf("%lld", &n);
    long long arr[n];
    for(int i=0; i<n;i++){
        scanf("%lld",&arr[i]);
    }
    printf("%lld %lld",arr[0],arr[n-1]);
    
    return 0;
}
