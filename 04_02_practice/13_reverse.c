//  1234 =---> 4321
#include <stdio.h>
int main()
{
	long int num, a, rem, rev = 0;
	printf("Enter a number : \n");
	scanf("%ld", &num);
	while (num != 0)
	{
		a = (num / 10);
		rem = (num - (a)*10);
		num = a;
		rev = (rev * 10) + rem;
	}
	printf("The ereverse of the number you entered is : %ld.", rev);
	return 0;
}