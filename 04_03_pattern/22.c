#include <stdio.h>
int main()
{
    int n;
    char ch = 32;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        printf("#");
    }
    printf("\n");
    for (int row = 2; row <= n - 1; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == 1 || col == n)
            {
                printf("#");
            }
            else if (col == n)
            {
                break;
            }
            else
            {
                printf("%c", ch);
            }
        }
        printf("\n");
    }
    for (int row = 1; row <= n; row++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}