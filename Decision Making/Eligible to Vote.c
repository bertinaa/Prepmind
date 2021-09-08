#include<math.h>
#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("Congratulation! You are eligible for casting your vote");
    }else{
        printf("Oops! You are not eligible");
    }

    return 0;
}
