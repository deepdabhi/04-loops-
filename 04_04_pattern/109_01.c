#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : \n");
    scanf("%d", &n);
    int j = 1;
    for (int row = 1; row <= 2 * n; row++)
    {
        if (row <= n)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("%d ", j++);
                
            }
        }
        // printf("%d",j);
        printf("\n");
    }
    return 0;
}