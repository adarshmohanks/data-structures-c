/* c program for Enqueue Dequeue and Display*/
#include <stdio.h>
#define MAXSIZE 5
int queue[5];
int rear =-1;
int front=0;
void display();

int isfull(){
	if (rear >= MAXSIZE-1)
		return 1;
	else
		return 0;
	}
	
int isempty(){
	if (front > rear)
 		return 1;
	else
		return 0; 	
	}

void enqueue (int a) {
	if (isfull())
		printf("Queue Overflow");
	else {
		rear ++;
		queue [rear] =a;
		display();
		}
	}
	
void dequeue(){
	if(isempty())
		printf("Queue Underflow");
	else{
		printf("The popped element is: %d ",queue [front]);
		front++;
		display();
	}
	}
	
void display(){
	int i;
	printf("\nThe queue is: \n");
		for(i=front; i<=rear; i++)
		printf("%d \n", queue[i]);
		printf("\n");
	}	

void main(){
	int choice,a;
	do{
	printf("Enter your choice \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
	scanf("%d", &choice);
	switch (choice){
		case 1:
			printf("Enter element to be added to the queue: \n");
			scanf("%d",&a);
			enqueue(a);
			break;
		
		case 2:
			dequeue();
			break;
			
		case 3:
			display();
			break;
		case 4:
			break;
			}
		}
		while(choice!=4);
	}	

