#include <stdio.h>
int main()
{
    int d = 1, e, j = 0;
    float sum = 0;
    printf("Enter 5 for sum and 7 for average. \n");
    scanf("%d", &e);
    while (d == 1 && e == 5)
    {
        int i, d;
        printf("Enter the value of i : \n");
        scanf("%d", &i);
        sum += i;
        printf("Enter 1 to continue & 0 to skip. \n");
        scanf("%d", &d);
        if (d == 0)
        {
            printf("Sum = %.2f", sum);
            break;
        }
    }
    while (d == 1 && e == 7)
    {
        int i, d;
        printf("Enter the value of i : \n");
        scanf("%d", &i);
        sum += i;
        j++;
        printf("Enter 1 to continue & 0 to skip. \n");
        scanf("%d", &d);
        if (d == 0)
        {
            printf("Average = %.2f", sum / j);
            break;
        }
    }
    return 0;
}