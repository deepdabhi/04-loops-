#include <stdio.h>
int main()
{
    int u, l;
    printf("Enter the upper limit : ");
    scanf("%d", &u);
    printf("Enter the lower limit : ");
    scanf("%d", &l);
    while (l <= u)
    {
        int c = 2;
        int flag = 0;
        while (c * c <= l)
        {
            if (l % c == 0)
            {
                flag = 1;
                break;
            }
            c++;
        }
        if (flag == 0 && l != 1)
        {
            printf("%d ", l);
        }
        l++;
    }
    return 0;
}