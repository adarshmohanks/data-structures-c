#include<stdio.h>
int main(){
    int ar[25], max,first, last, mid, i,j,item, temp , loc=-1;
    printf("How many elements : ");
    scanf("%d" , &max);
    printf("Enter the array elements : ");
    for(i=0; i<max; i++)   
    	{
        scanf("%d", &ar[i]);
    	}
    for(i=0;i<max;i++)
        {
      	for(j=i+1;j<max;j++)
     	   {
        	if(ar[i]>ar[j])
        		{
        		temp=ar[i];
        		ar[i]=ar[j];
        		ar[j]=temp;
        		}
     		}
		}
    printf("Enter the item to search : ");
    scanf("%d", &item);
    first=0;
    last=max-1;
    while(first<=last)
    	{
        mid=(first+last)/2;
        if(item==ar[mid])
        	{
           	loc=mid;
           	break;
        	}
        if(item<ar[mid])
            last=mid-1;
        else
            first=mid+1;
    	}    
    if (loc==-1)
        printf("The item is not found in the array");
    else
        printf("The item found at position %d", loc+1);
    return 0;
}
