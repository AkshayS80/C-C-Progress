//WAP to delete duplicate elements from an array
#include <stdio.h>

int main(){
    int i,j,n,k,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Input array:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nArray after deletion of duplicates:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}