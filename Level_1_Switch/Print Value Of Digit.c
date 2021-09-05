// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int N;
    scanf("%d",&N);
   
    switch(N){
        case 10:
            printf("10 - TEN\n");
        case 9:
            printf("9 - NINE\n");
        case 8:
            printf("8 - EIGHT\n");
        case 7:
            printf("7 - SEVEN\n");
        case 6:
            printf("6 - SIX\n");
        case 5:
            printf("5 - FIVE\n");
        case 4:
            printf("4 - FOUR\n");
        case 3:
            printf("3 - THREE\n");
        case 2:
            printf("2 - TWO\n");
        case 1:
            printf("1 - ONE\n");
        case 0:
            printf("0 - ZERO");
            break;
        default:
            printf("Invalid Input");
        
    }
    return 0;
}
