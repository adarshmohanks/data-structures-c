#include <stdio.h>
#define n 5
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1, cirqueue[n],data,i,j,item,ch;
int main(){
    do{
    printf("\n1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:enqueue();
            display();
            break;
        case 2:dequeue();
            display();
            break;
        case 3:display();
            break;
        case 4:break;
    }
    }while(ch!=4);
   
}
void enqueue(){
    if(rear==n-1 && front==0||front==rear+1)
    printf("Queue overflow");
    else{
        if(front==-1&&rear==-1){
            front=0;
            rear=0;
        }
        else{
            if(rear==n-1){
                rear=0;
            }
            else{
                rear++;
            }
        }
        printf("\nEnter the element to be inserted: ");
        scanf("%d",&data);
        cirqueue[rear]=data;
    }
}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("\nQueue is empty");
    }
    else{
        data=cirqueue[front];
        printf("\n%d is deleted",data);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            if(front==n-1){
                front=0;
            }
            else{
                front++;
            }
        }
       
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("\nQueue is empty");
    }
    else{
        printf("\nQueue elements are:");
        if(front<=rear){
            for(i=front;i<=rear;i++){
                printf("%d\t",cirqueue[i]);
            }
        }
        else{
            for(i=front;i<=n-1;i++){
            printf("%d\t",cirqueue[i]);
            }
            for(i=0;i<=rear;i++){
                printf("%d\t",cirqueue[i]);
            }
        }
        printf("\n");
    }
}
