#include <stdio.h>
int main()
{
    int n;
    char ch = 'A';
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}