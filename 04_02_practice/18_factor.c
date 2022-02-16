#include <stdio.h>
int main()
{
    int n, l = 1, x, c;
    while (1)
    {
        printf("Enter n :\n");
        scanf("%d", &n);
        for (x = l; x <= n; x++)
        {
            if (n % x == 0 && x * x <= n)
            {
                printf("%d * %d = %d \n", x, n / x, n);
            }
        }
    }
    return 0;
}
// 💯💯💯💯💯😎😎😎😎😎