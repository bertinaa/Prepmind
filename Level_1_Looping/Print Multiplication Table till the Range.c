#include <stdio.h>
int main(){
    int n,lim;
    scanf("%d",&n);
    scanf("%d",&lim);
    
    for (int i=1;i<=lim;i++){
        printf("%d X %d = %d\n",i,n,i*n);
    }
    
    return 0;
}
