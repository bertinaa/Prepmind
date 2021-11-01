// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int long long n,sum = 0;
    scanf("%lld",&n);
    int long long rev=0;
    int long long temp = n;
    while (temp!=0){
        int long long ld = temp %10;
        sum +=ld;
        temp/=10;
    }
    int long long tempe = sum;
        while (tempe!=0){
        int long long ld = tempe %10;
        rev = (rev*10)+ld;
        tempe = tempe /10;
    }
    if (rev==sum){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
    return 0;
}
