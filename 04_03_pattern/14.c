#include <stdio.h>
int main()
{
    int n;
    printf("Enter the valueof n : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= n; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}