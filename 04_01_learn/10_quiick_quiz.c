#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of n : \n");
    scanf("%d", &a);
    for (int i = a; i; --i)
    {
        printf("This is %d. \n", i);
    }
    return 0;
}