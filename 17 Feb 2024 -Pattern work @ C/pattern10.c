#include<stdio.h>
int main()
{
	int i,j,l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=-n;i<n;i++)
	{
		if(i<0)
		l=-i;
		else
		l=i;
		for(j=0;j<l+1;j++)
		printf("* ");
		printf("\n");
	}
	
}
