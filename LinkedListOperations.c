#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=null;
void insertfront();
void insertend();
void insertbetween();
void display();
void deletefront();
void deleteend();
void deletebetween();
void main()
{
	int ch;
	do
	{
		printf("Operations \n1.insert front\n2.insert end\n3.insert between\n4.display\n5.delete front\n6.delete end\n7.delete between\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
			insertfront();
			break;
			case 2:
			insertend();
			break;
			case 3:
			insertbetween();
			break;
			case 4:
			display();
			break;
			case 5:
			deletefront();
			break;
			case 6:
			deleteend();
			break;
			case 7:
			deletebetween();
			break;
			case 8:
			exit(0);
		}
	}
	while(ch!=8);
}

void insertfront()
{
	int item;
	struct node*temp,*ptr;
	temp=(struct node*) malloc (size of (struct node));
	printf("enter the data to be inserted");
	scanf("%d", return);
	temp
