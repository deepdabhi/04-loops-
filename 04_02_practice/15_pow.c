#include <stdio.h>
#include <math.h>
int main()
{
    float base;
    int power, ans = 1;
    printf("Enter base : \n");
    scanf("%f", &base);
    printf("Enter power : \n");
    scanf("%d", &power);
    while (power != 0)
    {
        ans *= base;
        --power;
    }
    printf("Base ^ Power is : %d.\n", ans);
    return 0;
}