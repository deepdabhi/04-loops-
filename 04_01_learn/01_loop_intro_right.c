#include <stdio.h>

int main()
{
    int a;
    printf("Please enter a number : \n");
    scanf("%d", &a);
    // while (a>=0) =---> this will lead to an infinite loop.
    while (a <= 10)
    {
        printf("%d ", a);
        a++;
    }
    return 0;
}
// This is a basic syntax of while loop.
/*#include<stdio.h>

int main(){
 int a;
 scanf ("%d", &a);
 while (while condition is true =---> non zero value.){
  printf ("%d \n", a);
  a++;
 }
 [There should be according things between curley braces, corresponding to requirement which are needed.] 
 return 0;
}*/