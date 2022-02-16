#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        for (int col = 1; col <= row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 1; row <= n - 1; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= n - row; col++)
        {
            printf("* ");
        }
        for (int col = 1; col <= n - row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// input 17 when normal and 230 when zoomed out completely.