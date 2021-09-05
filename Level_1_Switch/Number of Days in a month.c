#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    //3,5,7,8,10,12:
    switch(n){
        case 1:
            printf("31 Days");
            break;
        case 2:
            printf("28 Days");
            break;
        case 3:
            printf("31 Days");
            break;
        case 4:
            printf("30 Days");
            break;
        case 5:
            printf("31 Days");
            break;
        case 6:
            printf("30 Days");
            break;
        case 7:
            printf("31 Days");
            break;
        case 8:
            printf("31 Days");
            break;
        case 9:
            printf("30 Days");
            break;
        case 10:
            printf("31 Days");
            break;
        case 11:
            printf("30 Days");
            break;
        case 12:
            printf("31 Days");
            break;
        default:
            printf("Invalid input!");

    }


    return 0;
}
