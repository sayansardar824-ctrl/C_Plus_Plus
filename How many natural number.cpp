#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("How many natural number to be added");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(2*i-1);
	}
	printf("The sum is=%d",s);
	return 0;
}
