#include <stdio.h>
int main()
{
    float n, f = 1, sum = 0;
    printf("enter n : \n");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f *= j;
        }
        sum += (1 / f);
    }
    printf("%f", sum);
    return 0;
}