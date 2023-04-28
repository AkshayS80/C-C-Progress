//WAP to perform bubble sort
#include <stdio.h>
int n,arr[50];
int main(){
	int i,j,temp;
	temp=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);		
	}
	printf("Array before sort: \n");
	for (i=0;i<n;i++){
		printf("%d",arr[i]);		
	}
	for (j=1;j<n;j++){
		for(i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		printf("\nAfter iteration %d, we get:",j);
		prarr();
	//	for (i=0;i<n;i++){
	//	printf("%d",arr[i]);		
	//	}
	}
	printf ("\n Array after sort: \n");
	prarr();
//	for (i=0;i<n;i++){
//		printf("%d",arr[i]);		
//	}
}

void prarr(){
	int i;
	for (i=0;i<n;i++){
		printf("%d",arr[i]);		
		}
}
