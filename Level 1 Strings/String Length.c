#include <stdio.h>
#include<string.h>
int main(){
    char words[200];
    int count;
    scanf("%[^\n]s",&words);
    count = strlen(words);
    printf("%d",count);
    return 0;
}
