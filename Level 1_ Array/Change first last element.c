#include <stdio.h>

int main() {
    // Write C code here
    int long long n,a,b;
    scanf("%lld", &n);
    int long long arr[n];
    for(int i=0; i<n;i++){
        scanf("%lld",&arr[i]);
    }
    scanf("%lld %lld",&a,&b);
    arr[0]=a;
    arr[n-1]=b;
    for(int i=0;i<n;i++){
        printf("%lld ",arr[i]);
    }
    
    
    return 0;
}
