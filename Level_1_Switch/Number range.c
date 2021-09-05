// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    scanf("%d",&num);
   
    switch(num){
        case 0 ... 9:
            printf("%d is in the range [0-9]",num);
            break;
        case 10 ... 19:
            printf("%d is in the range [10-19]",num);
            break;
        case 20 ... 29:
            printf("%d is in the range [20-29]",num);
            break;
        case 30 ... 39:
            printf("%d is in the range [30-39]",num);
            break;
        case 40 ... 49:
            printf("%d is in the range [40-49]",num);
            break;
        case 50 ... 59:
            printf("%d is in the range [50-59]",num);
            break;
        case 60 ... 69:
            printf("%d is in the range [60-69]",num);
            break;
        case 70 ... 79:
            printf("%d is in the range [70-79]",num);
            break;
        case 80 ... 89:
            printf("%d is in the range [80-89]",num);
            break;
        case 90 ... 99:
            printf("%d is in the range [90-99]",num);
            break;
        
    }
    return 0;
}
