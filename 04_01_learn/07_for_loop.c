#include <stdio.h>

int main()
{
    for (int a = 1; a <= 10; /*a*/ ++a)
    {
        printf("A is %d. \n", a);
    }

    for (int b = 1; b <= 10; b++)
    {
        printf("B is %d. \n", b);
    }

    printf("This is to show that, in for loop a++ and ++a are same \n");
    return 0;
}