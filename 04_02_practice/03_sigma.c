#include <stdio.h>

int main()
{
    int i, n, s = 0;
    printf("Enter the number :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("Sigma is : %d. \n", s);
    return 0;
}