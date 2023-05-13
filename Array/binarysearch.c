// WAP to implement Binary Search on array

#include <stdio.h>

int main(){
    int n,i,search,res;
    int arr[50];
    printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);		
	}
	printf("Enter the element to be search:");
	scanf("%d",&search);
	res=binarySearch(arr,search,0,n-1);
	if (res==-1)
	    printf("The element can't be found.");
	else
	    printf("The element is found at the index %d",res);
	return 0;
}

int binarySearch(int array[],int x,int low,int high){
    if (high>=low){
        int mid=low+(high-low)/2;
        if (array[mid]==x)
            return mid;
        else if (array[mid]>x)
            return binarySearch(array,x,low,mid-1);
        else if (array[mid]<x)
            return binarySearch(array,x,mid+1,high);
    }
    else
        return -1;
}
