#include<stdio.h>
#include<math.h>
struct poly{
float coeff;
int exp;
};
int main(){
struct poly a[50],b[50],c[50];
int i;
int deg1,deg2;
int k=0,l=0,m=0;
printf("Enter the degree of the polynomial: ");
scanf("%d",&deg1);
for(i=0;i<=deg1;i++)
{
printf("\n Enter the coeffcient x^%d: ",i);
scanf("%f",&a[i].coeff);
a[k++].exp=i;
}
printf("Enter the degree of the second polynomial: ");
scanf("%d",&deg2);
for(i=0;i<=deg2;i++)
{
printf("\n Enter the coeffcient x^%d: ",i);
scanf("%f",&b[i].coeff);
b[l++].exp=i;
}
printf("\n Expression 1 = %.1f",a[0].coeff);
for(i=1;i<=deg1;i++)
{

printf("+.%.1fx^%d",a[i].coeff,a[i].exp);

}
printf("\n Expression 2 = %.1f",b[0].coeff);
for(i=1;i<=deg1;i++)
{

printf("+.%.1fx^%d",b[i].coeff,b[i].exp);

}
if(deg1>deg2)
{

for(i=0;i<=deg2;i++)
{

c[m].coeff=a[i].coeff+b[i].coeff;
c[m].exp=a[i].exp;
m++;
}

for(i=deg2+1;i<=deg1;i++)
{

c[m].coeff=a[i].coeff;
c[m].exp=a[i].exp;
m++;
}
}
else
{

for(i=0;i<=deg1;i++)
{

c[m].coeff=a[i].coeff+b[i].coeff;
c[m].exp=a[i].exp;
m++;
}

for(i=deg1+1;i<=deg2;i++)
{

c[m].coeff=b[i].coeff;
c[m].exp=b[i].exp;
m++;
}

}
printf("\n Expresson after addition = %.1f",c[0].coeff);
for(i=1;i<m;i++)
{

printf("+.%.1fx^%d",c[i].coeff,b[i].exp);

}

return 0;
}

