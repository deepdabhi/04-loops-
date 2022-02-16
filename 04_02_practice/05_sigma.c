#include <stdio.h>

int main()
{
    int i, n, s = 0;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("Sigma n is : %d. \n ", s);
    printf("s +=i means add the recent value of i in s and store it in the s. \n");
    return 0;
}
// Bhai nani value nakhje.😅