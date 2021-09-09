
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    char ch;
    scanf("%c",&ch);
    if(ch>96 && ch<123){
        printf("%d",ch-96);
    }else{
        printf("%d",ch-64);
    }
    
    return 0;
}
