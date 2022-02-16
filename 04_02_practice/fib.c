#include <stdio.h>
int main()
{
    while (1)
    {
        int n, x, a = 0, b = 1, i = 1;
        printf("Enter n: \n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("0 ");
        }
        else if (n >= 2)
        {
            printf("0 1 ");
        }
        x = a + b;
        while (i <= n - 2 && n != 1 && n != 2)
        {
            x = a + b;
            printf("%d ", x);
            a = b;
            b = x;
            i++;
        }
        printf("\n");
    }
    return 0;
}