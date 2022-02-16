#include <stdio.h>

int main()
{
    int a = 0, b = 1, x, n;
    printf("Please enter a number : \n");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    x = a + b;
    while (x <= n)
    {
        x = a + b;
        if (x > n)
        {
            break;
        }
        printf("%d ", x);
        a = b;
        b = x;
        // continue;
    }
    return 0;
}