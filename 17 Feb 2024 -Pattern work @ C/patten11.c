#include<stdio.h>
int main()
{
	int i,j,n,l,s;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<0)
		l=-i;
		else
		l=i;
		for(s=0;s<l;s++)
		printf("  ");
		for(j=0;j< 2*(n-l)+1;j++)
		printf("* ");
		printf("\n");
	}
	printf("\n");
}
