// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int N;
    scanf("%d",&N);
    if(N<=5 && N!=0){
        printf("Left ");
        switch(N){
        
        case 5:
            printf("Little Finger");
            break;
        case 4:
            printf("Ring Finger");
            break;
        case 3:
            printf("Middle Finger");
            break;
        case 2:
            printf("Index Finger");
            break;
        case 1:
            printf("Thumb");
        }
    }else if(N<=10 && N!=0){
        printf("Right ");
        switch(N){
            case 10:
            printf("Little Finger");
            break;
        case 9:
            printf("Ring Finger");
            break;
        case 8:
            printf("Middle Finger");
            break;
        case 7:
            printf("Index Finger");
            break;
        case 6:
            printf("Thumb");
            break;
        
        }
    }else{
        printf("Invalid Input");
    }
    
    return 0;
}
