//WAP to perform bubble sort using functions

#include <stdio.h>

void BubbleSort(int array[],int size){
    int i,j,temp;
    for(j=1;j<size;j++){
        for(i=0;i<size-1;i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}

void printarr(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",array[i]);
    }
}

int main()
{
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
    BubbleSort(arr,n);
    printf("Array after sort:\n");
    printarr(arr,n);
    return 0;
}
