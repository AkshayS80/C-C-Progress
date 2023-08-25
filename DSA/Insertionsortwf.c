//WAP to perform Insertion sort with function

#include <stdio.h>

void InsertionSort(int array[],int size){
    int i,j,temp;
    for (i = 1; i < size; i++) 
    {
        j = i;
        while (j > 0 && array[j - 1] > array[j]) 
        {
            temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
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
    InsertionSort(arr,n);
    printf("Array after sort:\n");
    printarr(arr,n);
    return 0;
}