#include<stdio.h>
#include<stdlib.h>
#define max 5
int dequeue[max],front=-1,rear=-1,a,b;
void addfront(int a);
void addrear(int b);
void deletefront();
void deleterear();
void display();
void main(){
int ch,t,u;
printf("Your program for performing dequeue operations");
printf("\n1.ADD FRONT \n2.ADD REAR \n3.DELETE FRONT \n4.DELETE REAR \n5.DISPLAY \n6.EXIT");
while(1){
printf("\nEnter your desired option: ");
scanf("%d",&ch);
switch(ch){
case 1:printf("Enter the element to be added to the front: ");
      scanf("%d",&t);
      addfront(t);
      break;
case 2:printf("Enter the element to be added to the rear: ");
      scanf("%d",&u);
      addrear(u);
      break;
case 3:deletefront();
       break;
case 4:deleterear();
       break;
case 5:display();
       break;
case 6:exit(0);
default:printf("\nWrong option entered, please try again");
}
}
}
void addfront(int a){
if((front==0 && rear==max-1) || (front==rear+1)){
printf("\nQueue is already full");
}
else if((front==-1)&&(rear==-1)){
                  front=rear=0;
                  dequeue[front]=a;
                  }
else if(front==0){front=max-1;
                 dequeue[front]=a;
                 }
else{front=front-1;
     dequeue[front]=a;
     }
     }
void addrear(int b){
if((front==0 && rear==max-1) || (front==rear+1)){
printf("\nQueue is already full");
}
else if((front==-1) && (rear==-1)){
                  front=0;
                  rear=0;
                  dequeue[rear]=b;
                  }
else if(rear==max-1){
rear=0;
dequeue[rear]=b;
}                     
else{
rear++;
dequeue[rear]=b;
}
}
void deletefront(){
if((front==-1) && (rear==-1)){
printf("\nQueue is underflowing");
}
else if(front==rear){
front=-1;
rear=-1;
}                  
else if(front==(max-1)){
front=0;
                      }
else{front=front+1;
     }
     }
void deleterear(){
if((front==-1) && (rear==-1)){
printf("\nQueue is underflowing");
}
else if(front==rear){front=-1;
                    rear=-1;
                    }
else if(rear==0){
rear=max-1;
}
else{
rear=rear-1;
}
}
void display(){
int i=front;
printf("\nElements in a dequeue are: \n");
while(i!=rear){
       printf("%d",dequeue[i]);
       i=(i+1)%max;
       }
printf("%d\t",dequeue[rear]);
}
