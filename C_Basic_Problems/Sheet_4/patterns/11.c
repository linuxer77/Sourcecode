#include <stdio.h>
int main()
{
    int n, i, k, j, sum;
    printf("enter a num \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
