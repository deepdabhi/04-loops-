#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the n : \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);
    return 0;
}