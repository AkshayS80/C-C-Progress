//WAP to perform binary search with iteration.
#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}

int main(void) {
  int i,j,n,search,index,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    index=binarySearch(arr,search,0,n-1);
    if (index==-1)
        printf("Element not found");
    else
        printf("The element %d was found at index %d",search,index);
    
    return 0;
}