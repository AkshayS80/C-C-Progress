//WAP to perform selection sort with function
#include <stdio.h>

void SelectionSort(int array[],int size){
    int i,a,j,temp;
    for(i=0;i<=size-1;i++){
		a=i;
		for(j=i+1;j<=size-1;j++){
			if(array[j]<array[a]){
				a=j;			
			}
		}
		temp=array[a];
		array[a]=array[i];
		array[i]=temp;
    }
}

void printarr(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",array[i]);
    }
}

int main(){
    int i,n,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sort:\n");
    printarr(arr,n);
    printf("\nArray is being sorted.....\n");
    SelectionSort(arr,n);
    printf("Array after sort:\n");
    printarr(arr,n);
    return 0;
}