#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    do
    {
        ++i;
        printf("This is %d. \n", i);
    } while (i < n);
    return 0;
}
// This will print the first n natural numbers.