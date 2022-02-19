#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        int i = n - row;
        for (int col = i; col > 0; col--)
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++)
        {
            if (row != n)
            {
                if (col == 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        for (int col = 2; col <= row; col++)
        {
            if (row != n)
            {
                if (col == row)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        if (row == n)
        {
            for (int col = n + (n - 1); col > 0; col--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}