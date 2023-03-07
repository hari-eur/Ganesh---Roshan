#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=7;i>0;i--)
	{
		for(j=0;j<7-i;j++)
		{
			printf("  ");
		}
		for(k=i;k<=2*i-1;k++)
		{
			printf("* ");
		}
		for(k=0;k<i-1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
