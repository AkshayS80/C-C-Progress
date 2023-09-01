//WAP to implement stack using array

#include <stdio.h>

int stack[10],choice,n,top,x,i;

void push();
void pop();
void display();

int main()
{
    top=-1;
    printf("\n Enter the size of STACK : ");
    scanf("%d",&n);
    printf("\nSTACK IMPLEMENTATION USING ARRAYS\n");
    while(choice!=4){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            continue;
            
            case 2:
            pop();
            continue;
            
            case 3:
            display();
            continue;
            
            case 4:
            break;
            
            default:
            printf("Invalid Choice.");
        }
    }
    return 0;
}

void push(){
    if (top>=n+1){
        printf("Overflow: No more elements can be added.");
    }
    else{
        printf("Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if (top<=-1){
        printf("Underflow: No more elements can be deleted.");
    }
    else{
        printf("The popped element is %d",stack[top]);
        top--;
    }
}
void display(){
    if (top>=-1){
        printf("Elements of the stack:\n");
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
    else{
        printf("\nEmpty Stack\n");
    }
}