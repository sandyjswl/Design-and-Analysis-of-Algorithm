#include<stdio.h>
int time=0;
int linersearch(int a[],int size,int key)

{
	
	
	if (size<0)
	{	time++;
		return (-1);       
        }
	if (a[size]==key)
	{	
		time++;
		return (size);
	}
	else
	{
		time++;
		return linersearch(a,size-1,key);
			
	}
}

int main()
{
        int a[5],key,index,i,t;

        printf("Enter 5 elements:\n");
        for(i=0;i<5;i++)
                scanf("%d",&a[i]);

        printf("ENter the Value to search:\n");
        scanf("%d",&key);

        index=linersearch(a,5,key);

        if (index==-1)
                printf("Number Not found");
        else
                printf("Number found at positin %d\n",index);
		printf("Time required = %d comparisons",time);
}
                                                                                                                                                                    
                                                                                                                                                                       
                                                                                                                                                                       
                                     
