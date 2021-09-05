#include<stdio.h>
int main()
{
   int a,b,c,d,e,avg;

   
   scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
   avg=(int)(a+b+c+d+e)/50;


   switch( avg )
   {

   case 10:
   case 9:
     printf("Grade A");
     break;

   case 8:
     printf("Grade B");
     break;

   case 7:
     printf("Grade C");
     break;

   case 6:
     printf("Grade D");
     break;

   case 5:
     printf("Grade E");
     break;

   default:
     printf("Grade F");
     break;

   }

   return 0;
}
