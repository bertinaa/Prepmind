#include<stdio.h>
int main()
{
    int date;
    int month;
    int year;
    int day_of_year;
    scanf("%d/%d/%d", &date, &month,&year);
    //printf("%02d%02d%04d",date,month,year);
    day_of_year = 0;
    int days_remaining;
    if(date>0 && month>0 && year>0){
    switch(month-1)
    {
        case 12 : day_of_year += 31;
        case 11 : day_of_year += 30;
        case 10 : day_of_year += 31;
        case 9 : day_of_year += 30;
        case 8 : day_of_year += 31;
        case 7 : day_of_year += 31;
        case 6 : day_of_year += 30;
        case 5 : day_of_year += 31;
        case 4 : day_of_year += 30;
        case 3 : day_of_year += 31;
        case 2 :
            if((year%4==0 && year%100!=0)|| (year%400 == 0)){
                day_of_year +=29;
            }else{
                day_of_year+=28;
            }
        case 1 : day_of_year += 31;

    }
    day_of_year += date;
    /*
    now day_of_year holds how many days have passed
    we can now, get the remaining days by just subtracting the total days passed with the number of days in the year
    */
    if((year%4==0 && year%100!=0)|| (year%400 == 0)){
        days_remaining=366-day_of_year;
        printf("%d",days_remaining);
            }
    else if(month==2 && date>28)
    {
        printf("Invalid Date");
    }
    else{
                days_remaining=365-day_of_year;
                printf("%d",days_remaining);
            }
    }
    
    else{
        printf("Invalid Date");
    }

    return 0;
}
