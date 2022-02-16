#include <stdio.h>
int main()
{
    int n, l = 2, c, x;
    while (1)
    {
        printf("Enter n  : \n");
        scanf("%d", &n);
        for (x = l; x <= n; x++)
        {
            for (c = 2; c <= x - 1; c++)
            {
                if (x % c == 0)
                {
                    break;
                }
            }
            if (x == c && n % x == 0)
            {
                printf("%d ", x);
            }
        }
        printf("\n");
    }
    return 0;
}