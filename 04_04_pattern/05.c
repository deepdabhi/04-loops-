#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 1; row < n; row++)
    {
        int i = n - row;
        for (int col = i; col > 0; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}