#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n enter the mateix element a[%d][%d]:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n enter matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%6d", a[i][j]);
        printf("\n");
    }
    return 0;
}
