#include<math.h>
#include <stdio.h>
int main ()
{
    int a,b,c,max1,max2,max;
    scanf("%d %d %d",&a,&b,&c);
    /*if(a>b){
        if(a>c){
            printf("%d",a);
        }else {
            printf("%d",c);
        }
    }else if (b>a) {
        if (b>c){
            printf("%d",b);
        }else{
            printf("%d",c);
        }
    }*/
    max1 = (a>b)?a:b;
    max2 = (max1>c)?max1:c;
    max = (max1>max2)?max1:max2;
    printf("%d",max);

    return 0;
}
