#include<stdio.h>
int main()
{
    /*Dwarf<150
    Average==150
    Tall>=165*/
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("Valid");
    }else{
        printf("Not Valid");
    }
    
    return 0;
}
