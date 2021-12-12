#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++,printf("\n")){
        for(int j=1;j<=i;j++){
            printf("*");
        }
    }
    return 0;
}
