//WAP to implement selection sort in array
#include <stdio.h>
int n,arr[50];
int main(){
	int i,j,a,temp;
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

	for (i=0;i<=n-1;i++){
		a=i;
		for(j=i+1;j<=n-1;j++){
			if(arr[j]<arr[a]){
				a=j;			
			}
		}
		temp=arr[a];
		arr[a]=arr[i];
		arr[i]=temp;
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
		printf("%d ",arr[i]);		
		}
}
