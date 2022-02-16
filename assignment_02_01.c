#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            printf("%d ", col);
        }
        for (int col = 1; col < row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col < row; col++)
        {
            printf("  ");
        }
        for (int col = n - row + 1; col > 0; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}