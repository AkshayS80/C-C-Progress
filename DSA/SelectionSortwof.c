//WAP to perform selection Sort without function

#include <stdio.h>

int main(){
    int i,j,n,a,temp,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sort:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nArray is being sorted.....\n");
    for(i=0;i<=n-1;i++){
		a=i;
		for(j=i+1;j<=n-1;j++){
			if(arr[j]<arr[a]){
				a=j;			
			}
		}
		temp=arr[a];
		arr[a]=arr[i];
		arr[i]=temp;
    }
    printf("Array after sort:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}