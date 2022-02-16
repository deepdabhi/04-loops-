#include <stdio.h>
int main()
{
    int l, u, x, c;
    printf("Enter the lower limit : \n");
    scanf("%d", &l);
    printf("Enter the upper limit : \n");
    scanf("%d", &u);
    for (x = l; x <= u; x++)
    {
        for (c = 2; c <= x; c++)
        {
            if (x % c == 0)
            {
                break;
            }
        }
        if (x == c)
        {
            printf("%d ", c);
        }
    }
    return 0;
}