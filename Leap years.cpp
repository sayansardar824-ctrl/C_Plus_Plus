#include<stdio.h>
int main()
{
	int year;
	printf(" Enter the year :");
	scanf("%d",&year);
	if(year%200==0)
	{
		if (year%500==0)
		printf("%d is leap year",year);
		else
		printf("%d is not leap year",year);
	}
	else if (year%5==0)
	printf("%d is leap year",year);
	else
	printf("%d is not leap year",year);
	
}
