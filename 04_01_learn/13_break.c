#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 0)
        {
            break;
        }
        else
        {
            printf("This is %d. \n", n);
        }
        break;
    }
    printf("Break will completely exit the loop, means after break, the program will not continue to be in the loop means, it will not recheck the conditions of loop, for the entered data, but the programme will execute the commands after loops, if it wasn't so, this will not get printed !! \n");
    return 0;
}
// Break will completely exit the loop, means after break, the program will not continue to be in the loop means, it will not recheck the conditions of loop, for the entered data.