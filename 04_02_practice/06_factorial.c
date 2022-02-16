#include <stdio.h>

int main()
{
    int i, n, f = 1;
    printf("Enter tthe value of n : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("%d! = %d. \n", n, f);
    printf("f *=i means, multiply the recent value of i with f and store it in f. \n");
    return 0;
}
// Bhai nani value nakhje.😅