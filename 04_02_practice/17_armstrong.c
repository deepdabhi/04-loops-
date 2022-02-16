#include <stdio.h>

int main()
{
    long int num1, num2, a, rem, b, s = 0;
    printf("Please enter a number : \n");
    scanf("%ld", &num1);
    num2 = num1;
    while (num1 != 0)
    {
        a = (num1 / 10);
        rem = num1 - (a * 10);
        num1 = a;
        b = rem * rem * rem;
        s += b;
    }
    if (s == num2)
    {
        printf("%ld is an armstrong number. \n", num2);
    }
    else
    {
        printf("%ld is not an armstrong number. \n", num2);
    }
    return 0;
}
// 😍😍😍😍😍😎😎😎😎😎😘😘😘😘😘