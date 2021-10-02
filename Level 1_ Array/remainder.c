#include <stdio.h>

int main() {
    // Write C code here
    long long n,divisor;
    scanf("%lld", &n);
    long long arr[n];
    for(int i=0; i<n;i++){
        scanf("%lld",&arr[i]);
   }
   scanf("%lld",&divisor);
   for(int i=0;i<n;i++){
       printf("%lld ",arr[i]%divisor);
   }
    return 0;
    }
