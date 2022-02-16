#include <stdio.h>
int main()
{
    int n;
    char ch = 32;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            {
                int count = 1;
                if (row == 1 || row == n && count <= n)
                {
                    printf("# ");
                    count++;
                }
                printf("\n");
            }
            // continue;
            printf("# ");
            int count = 1;
            while (count <= 2 * (n - 2))
            {
                printf("%c", ch);
                count++;
            }
            printf("#");
            printf("\n");
        }
    }
    return 0;
}