// WAP to create a star pattern
// *
// * *
// * * *
// * * * *
// * * * * *
#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of rows you want shown:");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
