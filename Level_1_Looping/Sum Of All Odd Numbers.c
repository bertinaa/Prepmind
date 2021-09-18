#include <stdio.h>
int main(){
    int n,i=1,sum=0;
    scanf("%d",&n);
    for(;i<=n;i+=2){
        sum+=i;
    }
    printf("%d",sum);
    
    return 0;
}
