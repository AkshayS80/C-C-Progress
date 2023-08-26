//WAP to delete an element in array by position
#include <stdio.h>

int main(){
    int i,j,n,element,pos,arr[10];
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
    printf("\nEnter the location of the element to be deleted:");
    scanf("%d",&pos);
    if (pos>=n+1)
        printf("Deletion not possible");
    else
        for(j=pos;j<n-1;j++){
            arr[j]=arr[j+1];
        }
    n--;
    printf("Array after deletion:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
