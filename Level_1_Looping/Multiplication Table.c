#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    /*printf("1 X %d = %d\n",n,n*1);
    printf("2 X %d = %d\n",n,n*2);
    printf("3 X %d = %d\n",n,n*3);
    printf("4 X %d = %d\n",n,n*4);
    printf("5 X %d = %d\n",n,n*5);
    printf("6 X %d = %d\n",n,n*6);
    printf("7 X %d = %d\n",n,n*7);
    printf("8 X %d = %d\n",n,n*8);
    printf("9 X %d = %d\n",n,n*9);
    printf("10 X %d = %d\n",n,n*10);*/
    for (int i=1;i<=10;i++){
        printf("%d X %d = %d\n",i,n,i*n);
    }
    
    return 0;
}
