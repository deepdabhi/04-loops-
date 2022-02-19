#include <stdio.h>
int main()
{
    int n;
    while (1)
    {

        printf("Enter n : \n");
        scanf("%d", &n);

        int d = (n + 1) / 2;
        int c = d + (d - 1);

        for (int row = 1; row <= d; row++)
        {
            for (int col = 1; col <= d - row; col++)
            {
                printf("  ");
            }
            for (int col = 1; col <= row; col++)
            {
                printf("* ");
            }
            if (row >= 2)
            {
                for (int col = 1; col <= row - 1; col++)
                {
                    printf("* ");
                }
            }
            for (int col = 1; col <= d - row; col++)
            {
                printf("  ");
            }
            // printf("\n");
            for (int col = 1; col <= d - row - 1; col++)
            {
                printf("  ");
            }
            if (row != d)
            {
                for (int col = 1; col <= row; col++)
                {
                    printf("* ");
                }
            }
            if (row == d)
            {
                for (int col = 1; col <= d - 1; col++)
                {
                    printf("* ");
                }
            }
            if (row >= 2)
            {
                for (int col = 1; col <= row - 1; col++)
                {
                    printf("* ");
                }
            }
            for (int col = 1; col <= d - row; col++)
            {
                printf("  ");
            }
            printf("\n");
        }

        for (int row = 1; row <= c - 1; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("  ");
            }
            for (int col = 1; col <= c - row; col++)
            {
                printf("* ");
            }
            for (int col = 1; col <= c - row - 1; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
