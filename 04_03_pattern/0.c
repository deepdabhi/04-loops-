#include <stdio.h>
int main()
{
    int n;
    printf("Enter n :\n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        int i = row;
        for (int col = 1; col < row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
    return 0;
}