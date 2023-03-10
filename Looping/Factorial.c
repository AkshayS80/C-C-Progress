#include <stdio.h>
int main()
{
	int num,i,fact;
	i=1;
	fact=1;
	printf("Enter the number:");
	scanf("%d",&num);
	if (num!=0)
	{
		while (i<=num)
		{
			fact=fact*i;
			i++;
		}
		printf("The factorial is %d",fact);
	}
	else
	{
		printf("The factorial of 0 is 1");
	}
	return 0;
}
