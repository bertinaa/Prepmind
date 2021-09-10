// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    char ch;
    scanf("%c",&ch);
    if(ch>96 && ch<123){
        printf("Yes");
    }else if (ch>64 && ch<91){
        printf("Yes");   
    }else{
        printf("No");
    }
    
    return 0;
}
