//WAP to insert an element in an array

#include <stdio.h>

int main(){
    int i,j,n,element,pos,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&element);
    printf("Enter the postion to be inserted at:");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}