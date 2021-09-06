// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            printf("1.0.0.1 to 126.255.255.254");
            break;
        case 'B':
            printf("128.1.0.1 to 191.255.255.254");
            break;
        case 'C':
            printf("192.0.1.1 to 223.255.254.254");
            break;
        case 'D':
            printf("224.0.0.0 to 239.255.255.255");
            break;
        case 'E':
            printf("240.0.0.0 to 254.255.255.254");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}
