#include <stdio.h>

int main()
{
    int i, n = 2;
    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("Continue will not completely exit the loop, means after continue, the programme will stop to compile the instructions which are given below continue and will recheck the conditions of loop for the enterd data accordingly. \n");
    return 0;
}
// Continue will not completely exit the loop, means after continue, the programme will stop to compile the instructions and will recheck the conditions of loop  for the enterd data accordingly.