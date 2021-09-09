#include<math.h>
#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("Fine Mind");
    }else if(a%3==0){
        printf("Fine");
    }else if(a%5==0){
        printf("Mind");
    }
    return 0;
}
