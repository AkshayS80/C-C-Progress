//WAP to implement a circular array using queue

#include <stdio.h>
#define n 5

int CQ[n];
int front=-1,rear=-1;

int isfull(){
    if((front==rear+1)||(front==0 && rear>=n-1))
        return 1;
    else
        return 0;
}

int isempty(){
    if(front==-1)
        return 1;
    else
        return 0;
}

void enqueue(){
    if (isfull()){
        printf("The queue is FULL!!");
    }
    else{
        int x;
        printf("Enter an element:");
        scanf("%d",&x);
        if(front==-1)
            front=0;
        rear=(rear+1)%n;
        CQ[rear]=x;
        printf("Inserted=%d",x);
    }
}

void dequeue(){
    int x;
    if (isempty()){
        printf("The queue is EMPTY!!");
    }
    else{
        x=CQ[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        printf("Deleted=%d",x);
    }
}

void peek(){
    int i;
    if (isempty()){
        printf("The queue is EMPTY!!");
    }
    else{
        printf("\n Front -> %d ", front);
        printf("\n Items in queue currently -> ");
        for (i = front; i != rear; i = (i + 1) % n) {
            printf("%d ", CQ[i]);
        }
        printf("%d ", CQ[i]);
        printf("\n Rear -> %d \n", rear);
  }
    
}
//main function begins
int main()
{
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
    return 0;
}
