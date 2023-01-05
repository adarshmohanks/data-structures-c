/*c program for pushing poping and displaying in stack*/
#include <stdio.h>
int m=8;
int stack[8];
int top=-1;

int isempty() {
	if (top<=-1)
	return 1;
	else
	return 0;
	}
	
int isfull() {
	if (top>=m)
	return 1;
	else
	return 0;
	}
	
void pop(){
	if (!(isempty())) {
	int data;
	data= stack [top];
	printf("%d\n", data);
	top=top-1;
	}
	else{
	printf("couldn't pop");
	}
	}
	
void push (int data)
	{
	top=top+1;
	if(!(isfull())) {
	stack[top]=data;
	}
	else{
	top=top-1;
	printf("couldn't insert \n");
	}
	}

void display(){
	for (int i=0; i<=top; i++){
	printf("%d\n", stack[i]);
	}
	}
	
void main(){
	int choice =0, a=0;
	do{
	printf("Enter choice \n1.Push \n2.Pop \n3.Display \n4.Exit \n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		printf("Enter the element to be added: \n");
		scanf("%d", &a);
		push(a);
		break;
		
		case 2:
		pop();
		break;
		
		case 3:
		display();
		break;
		
		case 4:
		break;
					
		default: printf("Inavalid input\n");
		}
		}
		while(choice != 4);
	}	
