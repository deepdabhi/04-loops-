#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the number you want sigma of : \n");
    scanf("%d", &i);
    s = ((i) * (i + 1)) / 2;
    printf("Sigma is : %d.\n", s);
    printf("This method is prefered as it consumes lesser ram, as compared to other methods.");
    return 0;
}