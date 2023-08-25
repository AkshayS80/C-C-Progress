//WAP to perform binary search with recursion.
#include <stdio.h>

int binarySearch(int array[], int low, int high, int x){
    if (high >= low){
        int mid = low + (high - low)/2;
        if (array[mid] == x) 
            return mid;
        else if (array[mid] > x) 
            return binarySearch(array, low, mid-1, x);
        else    
            return binarySearch(array, mid+1, high, x);
    }
    else{
        return -1;
    }
}

int main(){
    int i,j,n,search,index,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    index=binarySearch(arr,0,n-1,search);
    printf("The element %d was found at index %d",search,index);
    
    return 0;
}

