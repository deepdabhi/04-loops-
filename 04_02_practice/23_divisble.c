#include <stdio.h>
int main()
{
    int u, l;
    printf("Enter the value of lower limit : \n");
    scanf("%d", &l);
    printf("Enter the value of upper limit : \n");
    scanf("%d", &u);
    while (l <= u)
    {
        if (l % 7 == 0)
        {
            printf("%d ", l);
        }
        l++;
    }
    return 0;
}