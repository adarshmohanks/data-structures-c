
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;

};
struct node * head;

void insertatbeg(int data){

struct node * temp = (struct node *)malloc((sizeof(struct node )));
temp->data=data;
temp->next=head;
head=temp;
}
void insertafter(struct node * prev,int data,int loc)
{

for(int i=0;i<loc;i++)
prev=prev->next;

if(prev==NULL)
printf("the previous not cant be null");
struct node * temp =  (struct node*)malloc((sizeof(struct node)));
temp->data = data;
temp->next =prev->next;
prev->next =temp;
}
void insertatend(struct node * last,int data){
struct node * temp =  (struct node*)malloc((sizeof(struct node)));
temp->data=data;

while(last->next != NULL)
last=last->next;
last->next=temp;
temp->next=NULL;
}
void dis()
{
struct node * temp =  (struct node*)malloc((sizeof(struct node)));
temp=head;
int data;
while(temp != NULL)
{data =temp->data;
printf("\t %d ",data);
temp=temp->next;
}

}
void deletef()

{ printf("\n deletde element :%d ",head->data);
 head = head->next;
}
void deleteend()
{
struct node * temp =  (struct node*)malloc((sizeof(struct node)));
temp=head;
while((temp->next)->next!=NULL)
temp=temp->next;
printf(" \n deletde element :%d ",(temp->next)->data);
temp->next =NULL;
}
void deletes(int loc)
{
struct node * temp =  (struct node*)malloc((sizeof(struct node)));
temp=head;
int i=0;
if(loc==0){
printf("\n deletde element :%d ",head->data);
head=head->next;}
else {
while(i<loc-1){
temp=temp->next;

i++;}
printf(" \n deletde element :%d ",(temp->next)->data);
temp->next=(temp->next)->next;
}
}
void main(){

int a,loc, data;
head = NULL;
      while(a!=8)
      {
        printf(" \n enter your option \n 1. to insert at beg \n 2.insert at after \n 3. insert at end \n 4. delete at the front \n 5. delete at end  \n 6. delete at specific  \n 7. display \n 8 .exit  ");
        scanf("%d",&a);
        switch(a){
        case 1:printf("\n enter your data : ");
                scanf("%d",&data);
               
                insertatbeg(data);
                 break;
        case 2:        printf("\n enter your data : ");
                scanf("%d",&data);
                printf("\n enter your loc");
                scanf("%d",&loc);
                insertafter(head,data, loc);
                break;
        case 3 :      printf("\n enter your data : ");
                scanf("%d",&data);
                insertatend(head,data);
                break;
        case 7:
         printf("\n the linked list : ");
                dis();
              
                break;
                
        case 4: deletef();
        break;
        case 5:deleteend();
        break;
        case 6: printf("\n enter your loc");
                scanf("%d",&loc);
        deletes(loc);
        break;
                
        }
        
      
      } 

}


