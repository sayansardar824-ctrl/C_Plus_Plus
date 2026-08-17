// Display pattern
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the number of rows:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    // space printing
    {
        printf("  ");
        // printing number
        for (j = 1; j <= i; j++)
        {
            printf("  %d ", i);
        }
        printf("\n");
    }
    return 0;
}
