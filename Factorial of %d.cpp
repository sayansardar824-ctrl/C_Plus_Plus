#include<stdio.h>
main()
{
	int a, num, nfac, fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	nfac=1;
	a=num;
	while(num>0)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("Factorial of %d is =%d", a, fact);
}
