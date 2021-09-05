// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char color;
    scanf("%c",&color);
   
    switch(color){
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'R':
            printf("Red");
            break;
        default:
            printf("No Rainbow Color");
        
    }
    return 0;
}
