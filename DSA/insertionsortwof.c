//WAP to perform insertion sort without function.

#include <stdio.h>

int main(){
    int i,j,n,temp,arr[10];
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
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Array after sort:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}