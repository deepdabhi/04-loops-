#include <stdio.h>

int main()
{
    int a = 4, b = a - 3;
    do
    {
        printf("%d \n", b++);
    } while (b > 0);
    return 0;
}
// =---> This will print the natural numbers.