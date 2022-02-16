#include <stdio.h>

int main()
{
    int num, i = 2, flag = 1;
    printf("Please, enter a number : \n");
    scanf("%d", &num);
    while (i < (num))
    {
        i++;
        if (i != num && num % i == 0)
        {
            printf("%d is a composite number. \n", num);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is a prime number. \n", num);
    }
    return 0;
}