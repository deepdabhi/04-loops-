#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int j = n;
    while (n != 0)
    {
        fact *= n;
        n--;
    }
    printf("%d! = %d.", j, fact);
    return 0;
}