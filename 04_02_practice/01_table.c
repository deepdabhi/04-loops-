#include <stdio.h>

int main()
{
    int a = 1, b;
    printf("Please enter a number : \n");
    scanf("%d", &b);
    while (a <= 10)
    {
        printf("%d * %d = %d. \n", b, a++, b * a);
    }
    return 0;
}