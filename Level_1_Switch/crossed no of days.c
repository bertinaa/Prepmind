#include<stdio.h>
int main()
{
    int day, month, year;
    scanf("%d/%d/%d",&day,&month,&year); //27, 10, 1990
    int sum=0;
    switch(month-1) 
    {
        case 12:sum+=31;
        case 11:sum+=30;
        case 10:sum+=31;
        case 9: sum+=30;
        case 8: sum+=31;
        case 7: sum+=31;
        case 6: sum+=30;
        case 5: sum+=31;
        case 4: sum+=30;
        case 3: sum+=31;
        case 2: sum+=28;
                       if((year%4==0 && year%100!=0)||(year%400==0))
                             sum = sum  + 1;
        case 1:sum+=31;
    }
    sum=sum+(day-1);
    printf("%d",sum);
    return 0;
}
