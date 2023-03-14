#include <stdio.h>
int main()
{
	int ll,ul,i;
	printf("Enter the lower limit:");
	scanf("%d",&ll);
	printf("Enter the upper limit:");
	scanf("%d",&ul);
	printf("The odd numbers between them are\n");
	for(i=ll;i<=ul;i++)
	{
		if (i%2==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
