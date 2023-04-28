//WAP to implement reverse sort in array
#include <stdio.h>
int n,arr[50];
int main(){
	int i,j,temp,shuff;
	temp=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);		
	}
	printf("Array before sort: \n");
	prarr();
//	for (i=0;i<n;i++){
//		printf("%d",arr[i]);		
//	}
	for (j=0;j<n;j++){
		temp=arr[j];
		for(i=0;i<n-1;i++){
			if(temp>arr[i]){
				shuff=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=shuff;
			}
			else{
				break;
			}
		}
		printf("\nAfter iteration of value %d, we get:",arr[j]);
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
