#include <stdio.h>

int main()
{
    int a, b, c, max, lcm;
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
    max = a;
    while (max)
    {
        max++;
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
    }
    printf("LCM = %d", lcm);
    return 0;
}