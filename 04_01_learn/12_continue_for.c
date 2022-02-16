#include <stdio.h>

int main()
{
    int b = 5;
    for (int a = 0; a <= 10; a++)
    {
        if (a != b)
        {
            continue;
        }
        else
        {
            printf("This is %d.\n", a);
        }
    }
    return 0;
}