//Display 5 number given by user
#include<stdio.h>
#include<stdio.h>
int main()
{
	int i,n;
	float a[100],s=0,average;
	printf("How many number to be given:\t");
	scanf("%d",&n);
	printf("input the numbers:\n");
	for (i=1;i<=n;i++)
	{
		scanf("%f",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			printf("a[%d]=%.3f\n",i,a[i]);
		}
		for(i=1;i<=n;i++)
		{
			s=s+a[i];
			
		}
		{
			average=s/n;
		}
		printf("Sum and averges of %d numbers given by user are =%.3f and %.3f respectively\n",n,s,average);
		return 0;
}
