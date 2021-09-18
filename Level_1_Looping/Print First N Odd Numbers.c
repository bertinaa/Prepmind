// Online C compiler to run C program online
#include <stdio.h>

int main()
{
	int n,i,j;

	scanf("%d",&n);
	
	for(j=1,i=1;j<=n;i=i+2,j++)
	{
		printf("%d ",i);
	}
	return 0;
}
