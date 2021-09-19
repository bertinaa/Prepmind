#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&i);
    scanf("%d",&n);
    for(;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    
    return 0;
}
