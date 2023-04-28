// WAP to create a star pattern
// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of rows you want shown:");
	scanf("%d",&num);
	for (i=num;i>=1;i--){
		for (j=i;j<=1;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
