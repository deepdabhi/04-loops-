#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, l, u;
    printf("Enter u : \n");
    scanf("%d", &u);
    printf("Enter l : \n");
    scanf("%d", &l);
    if (l == 0)
    {
        printf("0 1 ");
    }
    else
    {
        printf("1 ");
    }
    while (c <= u)
    {
        c = a + b;
        if (c >= l && c <= u)
        {
            printf("%d ", c);
        }
        a = b;
        b = c;
    }
    return 0;
}