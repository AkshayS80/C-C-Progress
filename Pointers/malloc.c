//WAP to show the use of calloc malloc and realloc functions
#include <stdlib.h>
#include <stdio.h>
int main(){
	int *ptr, n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if (ptr==NULL){
		printf("Memory not allocated\n");
	}
	else{
		printf("Memory successfully allocated using malloc\n");
		printf("Enter the elements;");
		for(i=0;i<n;++i){
			scanf("%d",&ptr[i]);
		}	
		printf("The elements are");
		for(i=0;i<n;++i){
			printf("%d",ptr[i]);
		}	
	}
	return 0;
}
