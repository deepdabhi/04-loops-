#include <stdio.h>

int main()
{

    int a = 5;

    printf("The value aftter a++ (a+1) is %d. \n", a + 1); //=---> This is to show you the difference between a++ and a+1, a+1 will only increase the value of a by one, but won't store it in place of a, like a++ does, and a++ prints the value asssigned to a, but here, a+1 directly prints a+1.
    printf("This is to show you the difference between a++ and a+1, a+1 will only increase the value of a by one, but won't store it in place of a, like a++ does, and a++ print sthe value asssigned to a, but here, a+1 directly prints a+1. \n");

    printf("The value of a (a++) is %d. \n", a++); //=---> a++ will first print the value which was assigned to a, and then it will increase the a by adding one, and store it in a in place of the value of a, which was previously assiigned to it, and you can check it, like shown bwlow.
    printf("a++ will first print the value which was assigned to a, and then it will increase the a by adding one, and store it in a in place of the value of a, which was previously assiigned to it, and you can check it, like shown bwlow. \n");
    printf("The value of a++ (a) is %d. \n", a); //=---> And this is the reason, that though taking value of a and prinnt it, it prints a+1.
    printf("And that's why, though taking value of a and prinnting it, it prints a+1. \n");

    printf("To get the crisp of a++ and ++a check out the folloewing. \n");
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