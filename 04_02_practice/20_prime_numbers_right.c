#include <stdio.h>

int main()
{
    int l, u, i = 2, x;
    printf("Please enter the lower limit of range : \n");
    scanf("%d", &l);
    printf("Please enter the higher limit of range : \n");
    scanf("%d", &u);
    for (x = l; x < u; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            printf("%d ", x);
        }
    }
    return 0;
}
// Try to involve lesser variables in the proogram, try to relate and cross check the programs by "VIVEK BUDHDHI", rather than adding useless variables.