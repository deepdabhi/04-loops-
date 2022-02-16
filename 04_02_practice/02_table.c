#include <stdio.h>

int main()
{
    int a = 11, b;
    printf("Please enter a number : \n");
    scanf("%d", &b);
    while (a > 1)
    {
        a--;
        printf("%d * %d = %d. \n", b, a, b * a);
    }
    return 0;
}