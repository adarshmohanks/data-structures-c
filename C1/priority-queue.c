#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front=-1,rear = -1;int prior[MAX];
void check(int n){
int i,j;
for(i=0;i<=rear;i++)
{
  if(n<=prior[i]){
      for(j=rear+1;j>i;j--)
      prior[j]=prior[j-1];
      prior[i] = n;
      rear++;
      return;
  }
}
prior[i] = n;
rear++;
}
void insert(){
int data ;
if(rear==MAX-1)
printf("\nOverflow");
else
{
printf("Enter the data: ");
scanf("%d",&data);
if(front==-1&&rear==-1){
front++;
rear++;
prior[rear]=data;
}
else
check(data);
}
}
void delete(){
int i,data;
if(front==-1&& rear==-1){
printf("\nQueue empty");
return;
}
printf("Enter the data to be deleted: ");
scanf("%d",&data);
for(i=0;i<=rear;i++)
{
if(data == prior[i])
{
while(i<rear)
{
prior[i]=prior[i+1];
i++;
}
rear--;
if(rear==-1)
front=-1;
return;
}
}
printf("Not found ");
}
void display()
{
if(front==-1&& rear==-1)
{
printf("\nQueue empty");
return;
}
for(int i=front; i<=rear;i++)
{
	printf("%d\n",prior[i]);
}
}
void main()
{
int ch;
do
{
printf("1.Add \n2.Delete \n3.Display\n4.Exit \nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
  case 1:
      insert();
      display();
      break;
  case 2:
      delete();
      display();
      break;
   case 3 :
      display();
      break;
  case 4:
      exit(-1);
  default: printf("Invalid input");
}
}while(ch!=4);
}
