#include <stdio.h>

int main()
{
    int num, i = 2;
    printf("Please, enter a number : \n");
    scanf("%d", &num);
    while (i < num)
    {
        if (num % i == 0 && num != i)
        {
            printf("%d is a composite number. \n", num);
            break;
        }
        i++;
    }
    if (num == i)
    {
        printf("%d is a prime number. \n", num);
    }
    return 0;
}