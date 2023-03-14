#include <stdio.h>
int main()
{
	int num,rev,b;
	b=0;
	rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while (num!=0)
	{
		b=num%10;
		rev=(rev*10)+b;
		num=num/10;
	}
	printf("The number when reversed becomes: %d",rev);
	return 0;
}
