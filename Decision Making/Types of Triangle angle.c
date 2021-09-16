#include<stdio.h>
int main()
{
    /*Right one angle is 90 deg
    Acute all three less than 90 deg
    Obtuse */
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==90 || b==90 || c==90){
        printf("Right Angle");
    }else if(a<90 && b<90 && c<90){
        printf("Acute");
    }else{
        printf("Obtuse");
    }
    return 0;
}
