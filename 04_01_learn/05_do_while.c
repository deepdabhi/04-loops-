#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is : %d. \n", i);
        i++;
    } while (i <= 10);
    return 0;
}
// Do while is similliar to while loop, but this particular runs for atleast once.
// It first runs the programmes and then checks the condition.