// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ", arr[i]);
    }
    return 0;
}
