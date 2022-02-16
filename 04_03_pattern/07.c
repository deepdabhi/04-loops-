#include <stdio.h>
int main()
{
    while (1)
    {
        int n;
        printf("Enter the value of n : \n");
        scanf("%d", &n);
        char ch = 32;
        for (int row = 1; row <= n; row++)
        {
            for (int space = 1; space <= n - row; space++)
            {
                printf("%c", ch);
            }
            for (int col = 1; col <= row; col++)
            {
                printf("# ");
            }
            //for(int space = 1; space <= n-row; space++){printf("%c",ch);}
            //no need to write these.
            printf("\n");
        }
        for (int row = 1; row <= n - 1; row++)
        {
            for (int space = 1; space <= row; space++)
            {
                printf("%c", ch);
            }
            for (int col = 1; col <= n - row; col++)
            {
                printf("# ");
            }
            //for(int space = 1; space <= row; space++){printf("%c",ch);}
            //no need to write these.
            printf("\n");
        }
    }
    return 0;
}