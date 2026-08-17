#include<stdio.h>
int main()
{
	int a, n, sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("Sum of the digits of the number %d",sum);
}
