//WAP to print the day of the week with switchcasex
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number between 1 and 7:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("The day is Sunday");
			break;
		case 2:
			printf("The day is Monday");
			break;
		case 3:
			printf("The day is Tuesday");
			break;
		case 4:
			printf("The day is Wednesday");
			break;
		case 5:
			printf("The day is Thrusday");
			break;
		case 6:
			printf("The day is Friday");
			break;
		case 7:
			printf("The day is Saturday");
			break;
		default:
			printf("The number entered is not between 1 and 7");
	}
	return 0;
}
