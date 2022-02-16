#include <stdio.h>
int main()
{
    int u, l, x;
    printf("Enter the upper liimit : \n");
    scanf("%d", &u);
    printf("Enter the lower liimit : \n");
    scanf("%d", &l);
    for (x = l; x <= u; x++)
    {
        int c, flag = 0;
        for (c = 2; c * c <= x; c++)
        {
            if (x % c == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0 && x != 1)
        {
            printf("%d ", x);
        }
    }
    return 0;
}