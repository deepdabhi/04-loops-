#include <stdio.h>

int main()
{
    int a, s = 0, num, rem;
    printf("Enter a number : \n");
    scanf("%d", &num);
    while (num != 0)
    {
        a = (num / 10);
        rem = num - a * 10;
        num = a;
        s += rem;
    }
    printf("Sum of numbers present in the integer that you entered is : %d.", s);
    return 0;
}