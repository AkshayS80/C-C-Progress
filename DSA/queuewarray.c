//WAP to implement queue using array

#include <stdio.h>
#define n 10
int Q[n];
int front=-1,rear=-1;

void enqueue();
void dequeue();
void peek();
int main(){
    int choice;
    while(choice!=4){
        printf("\n1 --> Enqueue\n");
        printf("2 --> Dequeue\n");
        printf("3 --> Peek\n");
        printf("4 --> Exit\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        if (choice==1){
            enqueue();
            continue;
        }
        else if (choice==2){
            dequeue();
            continue;
        }
        else if (choice==3){
            peek();
            continue;
        }
        else if (choice==4){
            break;
        }
        else{
            printf("Please enter a valid choice");
            continue;
        }
    }
}

void enqueue(){
    if (rear==n-1)
        printf("Queue is FULL!!");
    else{
        int x;
        printf("Enter a value:");
        scanf("%d",&x);
        if (front==-1)
            front=0;
        rear++;
        Q[rear]=x;
        printf("Inserted=%d",Q[rear]);
    }
}

void dequeue(){
    if (front==-1)
        printf("Queue is EMPTY!!");
    else{
        printf("Deleted=%d",Q[front]);
        front++;
        if (front>rear)
            front=rear=-1;
    }
}

void peek(){
    if (rear==-1)
        printf("Queue is Empty");
    else{
        int i;
        printf("The elements in the Queue are:\n");
        for(i=front;i<=rear;i++){
            printf("%d ",Q[i]);
        }
    }
}
