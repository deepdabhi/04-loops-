#include <stdio.h>

int main()
{
    int a, i, b, c, hcf;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Enter a number : \n");
    scanf("%d", &b);
    if (b > a)
    {
        c = a;
        a = b;
        b = c;
    }
    for (i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF = %d", hcf);
    return 0;
}