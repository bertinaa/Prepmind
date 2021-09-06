// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("Application Layer");
            break;
        case 2:
            printf("Presentation Layer");
            break;
        case 3:
            printf("Session Layer");
            break;
        case 4:
            printf("Transport Layer");
            break;
        case 5:
            printf("Network Layer");
            break;
        case 6:
            printf("Data Link Layer");
            break;
        case 7:
            printf("Physical Layer");
            break;

        default:
            printf("Invalid Input");
            break;
    }
    
    
    return 0;
}
