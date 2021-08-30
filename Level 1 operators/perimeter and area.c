#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int length,breadth,peri,area;
    scanf("%d%d",&length,&breadth);
    peri=2*(length+breadth);
    area=length*breadth;
    printf("Perimeter of the rectangle = %d inches\nArea of the rectangle = %d square inches",peri,area);

    return 0;
}
