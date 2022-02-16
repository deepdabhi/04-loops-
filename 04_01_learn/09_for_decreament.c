#include <stdio.h>

int main()
{
    for (int i = 5; i; --i)
    {
        printf("This is %d. \n", i);
    }
    for (int i = 5; i; i--)
    {
        printf("This is %d. \n", i);
    }
    printf("This is to show you that, in for loop i-- and --i works in same way. \n");
    return 0;
}
// This looop  will continue untill and unless the i becomes zero.

// The loop runs in following manner:

// 1 =---> i is intialaised to 5.
// 2 =---> The  condition i is tested (whether it is  zero or non zero).
// 3 =---> The code is executed.
// 4 =---> i is decremented.
// 5 =---> Condition i is checked to code which is executed if its not 0.
// 6 =---> And so on until i is non 0.
