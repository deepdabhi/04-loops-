#include <stdio.h>

int main()
{
    long int a, num1, num2, rem, rev = 0, b, c, rem1, rem2, flag, ans;
    printf("Enter a number : \n");
    scanf("%ld", &num1);
    num2 = num1;
    ans = num2;
    while (num1 != 0)
    {
        a = (num1 / 10);
        rem = (num1 - (a)*10);
        num1 = a;
        rev = (rev * 10) + rem;
    }

    while (num2 != 0 && rev != 0)
    {
        flag = 0;
        b = (rev / 10);
        c = (num2 / 10);
        rem1 = (rev - (b)*10);
        rem2 = (num2 - (c)*10);
        if (rem1 == rem2)
        {
            rev = b;
            num2 = c;
        }
        else
        {
            printf("%ld is not a palindrome.\n", ans);
            break;
        }
        flag = 1;
    }
    if (flag == 1)
    {
        printf("%ld is a palindrome.\n", ans);
    }
    return 0;
}