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
    scanf("%lld",&index);
    printf("%lld",arr[index]);
    return 0;
}
