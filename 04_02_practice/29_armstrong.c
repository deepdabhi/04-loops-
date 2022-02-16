#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : \n");
    scanf("%d", &n);
    int arm = 1, c = n, ans = 0, rem, i = 0;
    while (n != 0)
    {
        while (c != 0)
        {
            i++;
            c = c / 10;
        }
        rem = n % 10;
        n = n / 10;
        while (i > 0)
        {
            arm = arm * rem;
            i--;
        }
        ans = ans + arm;
    }
    printf("%d",ans);
    return 0;
}