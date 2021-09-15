#include<stdio.h>
int main()
{
    /*Dwarf<150
    Average==150
    Tall>=165*/
    int height;
    scanf("%d",&height);
    if(height<150){
        printf("Dwarf");
    }else if(height==150){
        printf("Average");
    }else{
        printf("Tall");
    }
    
    return 0;
}
