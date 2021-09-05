// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int math, phy, chem, tot;
    scanf("%d %d %d",&math,&phy,&chem);
    tot=math+phy+chem;
    if (math>=65 && phy>=55 && chem>=50){
        switch(tot){
            case 180 ... 300:
                printf("Eligible for admission");
                break;
            default:
                printf("Not eligible for admission");
        }
    }else{
        printf("Not eligible for admission");
    }
    
    return 0;
}
