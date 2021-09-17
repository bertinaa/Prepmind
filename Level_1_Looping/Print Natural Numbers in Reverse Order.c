#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    
    while(n!=0){
        printf("%ld ", n);
        n--;
    }
    return 0;
}
