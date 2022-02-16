#include <stdio.h>
int main()
{
    while (1)
    {
        int n;
        printf("Enter the value of n : \n");
        scanf("%d", &n);
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int row = 1; row <= (n - 1); row++)
        {
            for (int col = 1; col <= n - row; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}