#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    printf("Enter the number:\t");
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        sum = sum + a;
        n = n / 10;
    }
    printf("The sum of digits is:\t%d", sum);
}
