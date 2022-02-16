#include <stdio.h>

int main()
{
    int num, rem, a, s = 0;
    printf("Enter a number : \n");
    scanf("%d", &num);
    a = (num / 10);
    while (num != 0)
    {
        // a = (num/10);
        rem = num - (a)*10;
        num = a;
        s += rem;
    }
    printf("Sum of all the numbers present in the integer you enetred is : %d.", s);
    printf("The programme is not showing the output, because a = (num/10) is not included in the loop.");
    return 0;
}