#include<stdio.h>
int a[6],b[6],c[6],i,d1,d2,l;
void main(){
do{
printf("\nenter the degree of the first polynomial\n");
scanf("%d",&d1);
}while(d1<1);
printf("enter the coefficients in order from x^%d to x^0 \n",d1);
for(i=d1;i>=0;i--){
scanf("%d",&a[i]);
}
do{
printf("\n enter the degree of the second polynomial \n");
scanf("%d",&d2);
}while(d2<1);
printf("enter the coefficients in order from x^%d to x^0 \n",d2);
for(i=d2;i>=0;i--)
scanf("%d",&b[i]);
printf("polynomial sum is ");
if(d1>d2)
l=d1;
else
l=d2;
for(i=l;i>=0;i--){
if(i>d1){
c[i]=b[i];
printf("%dx^%d +",c[i],i);
}
else if(i>d2){
c[i]=a[i];
printf("%dx^%d +",c[i],i);
}
else{
c[i]=a[i]+b[i];
if(i!=0)
printf("%dx^%d +",c[i],i);
else
 printf("%dx^%d ",c[i],i);
}
}
}

	


