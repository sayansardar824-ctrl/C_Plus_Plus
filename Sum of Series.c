#include <stdio.h>
int main()
{
    int a, num, sum = 0;
    printf(" Enter a series number");
    scanf("%d", &num);
    a = num;
    while (num > 0)
    {
        sum = sum + num;
        num = num - 1;
    }
    printf("1+2+3+...+%d=%d", a, sum);
    return 0;
}