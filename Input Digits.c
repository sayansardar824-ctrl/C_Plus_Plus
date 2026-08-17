#include <stdio.h>
#include <math.h>
int main()
{
	int i, n;
	float a[100];
	printf("How many number to be given:\t");
	scanf("%d", &n);
	printf("input the numbers");
	for (i = 1; i <= n; i++)
	{
		scanf("%f", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		printf(" a[%d]=%f\t", i, a[i]);
	}
	return 0;
}