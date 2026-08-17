#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, max;
    printf("Enter Six number");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    if (e > max)
        max = e;
    if (f > max)
        max = f;
    printf("Maximum of six number is %d", max);
}
