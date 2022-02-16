#include <stdio.h>
int main()
{
    int n;
    while (1)
    {
        printf("Enter n : \n");
        scanf("%d", &n);
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("* ");
            }
            for (int col = 1; col <= n - row - 1; col++)
            {
                printf("  ");
            }
            if (row <= n - 1)
            {
                printf("* ");
            }
            for (int col = 1; col <= row - 1; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int row = 1; row <= n; row++)
        {
            if (row >= 2)
            {
                for (int col = 1; col <= n - row + 1; col++)
                {
                    printf("* ");
                }
                for (int col = 1; col <= row - 2; col++)
                {
                    printf("  ");
                }
                if (row >= 1)
                {
                    printf("* ");
                }
                for (int col = 1; col <= n - row; col++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}