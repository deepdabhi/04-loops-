#include <stdio.h>

int main()
{

    int a = 5;

    printf("The value of ++a (a+1) is %d. \n", a + 1); // =---> This is to show you the difference between ++a and a+1, output given by ++a and a+1 is same, but a+1 does not save a+1 in place of a, like a++ does.
    printf("This is to show you the difference between ++a and a+1, output given by ++a and a+1 is same, but a+1 does not save a+1 in place of a, like a++ does.\n");
    printf("The value of a (++a) after taking value from ++a is %d \n", ++a);
    printf("The value of a+1 (a) is %d \n");
    printf("To get thre crisp of a++ and ++a check out the folloewing. \n");
    printf("11_++_1.c \n");
    printf("11_++_2.c \n");
    printf("11_++_3.c \n");
    printf("11_++_4.c \n");
    printf("11_++_5.c \n");
    printf("11_++_6.c \n");
    return 0;
}
// i++ means, use the same value which was pereviously assigned to a, increase it by adding 1, store it in place of a.
// ++i means, use the a+1, and store a+1 in place of a.
// you can also use - in place of +, it will work simmiliarly.
// There is nnothing like a+++..., ...+++a, a---..., ...---a