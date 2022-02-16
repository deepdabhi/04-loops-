#include <stdio.h>

int main()
{
    int number;
    printf("Enter the value of number : \n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("This is %d. \n", i);
    }
    return 0;
}