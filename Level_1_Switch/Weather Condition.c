// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int temp;
    //double HRA, DA,gross;
    scanf("%d",&temp);
    if(temp<0){
        printf("Freezing Weather");
    }else{
        switch(temp){
        case 0 ... 10:
            printf("Very Cold Weather");
            break;
        case 11  ... 20:
            printf("Cold Weather");
            break;
        case 21 ... 30:
            printf("Normal Weather");
            break;
        case 31 ... 40:
            printf("Hot Weather");
            break;
        default:
            printf("Very Hot Weather");
    }
    
            
    }
    
    return 0;
}
