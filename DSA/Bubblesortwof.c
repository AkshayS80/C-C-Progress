//WAP to perform bubble sort without function.

#include <stdio.h>

int main()
{
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
    for(j=1;j<n;j++){
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("Array after sort:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
