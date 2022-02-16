#include <stdio.h>

int main()
{
    int a, b, c, lcm, hcf, i;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Enter a number : \n");
    scanf("%d", &b);
    if (b > a)
    {
        c = b;
        b = a;
        a = c;
    }
    for (i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (a * b) / hcf;
    printf("LCM = %d", lcm);
    return 0;
}