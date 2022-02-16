#include <stdio.h>

int main()
{
    int num, counter = 0;
    printf("Please, enter a number : \n");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        counter++;
    }
    printf("There are %d numbers in your digit. \n", counter);
    return 0;
}