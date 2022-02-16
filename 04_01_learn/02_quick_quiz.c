// #include<stdio.h>

// int main(){
//  int i = 0;
//  while (i+10<=20){
//   printf ("%d \n", &i);
//   i++;
//  }

//  return 0;
// }
// This is wrong one.

/*#include<stdio.h>

int main(){
 int i =0;
 while (i<=20){
  if (i>=10){
   printf ( "This is %d. \n", i);
   i++
  }
 }
 return 0;
}*/
// This is also wrong.

#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i > 10)
        {
            printf("This is %d. \n", i);
        }
        i++;
    }
    return 0;
}