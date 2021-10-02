#include <stdio.h>

int main() {
    // Write C code here
    long long n,quotient;
    scanf("%lld", &n);
    long long arr[n];
    for(int i=0; i<n;i++){
        scanf("%lld",&arr[i]);
   }
   scanf("%lld",&quotient);
   for(int i=0;i<n;i++){
       printf("%lld ",arr[i]/quotient);
   }
    return 0;
    }
