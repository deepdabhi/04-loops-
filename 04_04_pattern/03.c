#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        int i = n - row + 1;
        for (int col = i; col > 0; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}