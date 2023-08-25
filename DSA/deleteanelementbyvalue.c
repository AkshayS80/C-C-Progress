//WAP to delete an element in array by value
#include <stdio.h>

int main(){
    int i,j,n,element,pos,found,arr[10];
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
    printf("\nEnter the element to be deleted:");
    scanf("%d",&element);
    for(j=0;j<n;j++){
        if(arr[j]==element){
            found=1;
            pos=j;
            break;
        }
    }
    if(found==1){
        for(j=pos;j<n-1;j++){
            arr[j]=arr[j+1];
        }
    }
    for(i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    n--;
    printf("Array after deletion\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}