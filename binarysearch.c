#include<stdio.h>

int binarysearch(int a[],int low,int up,int key)
{
	int mid,l;
	
	for(l=low;l<up;l++)
	{
		mid=(low+up)/2;
		if (a[mid]==key)
			return mid;
		else 
		{
			if(key>a[mid])
				low=mid+1;
			else if(key<a[mid])
				up=mid-1;
		}
	}

	return -1;
} 

main()
{
	int a[10],key,i,index=-1;

	printf("Enter 5 Numbers:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	printf("Enter the Number to search:\n");
	scanf("%d",&key);

	index=binarysearch(a,0,4,key);

	if (index==-1)
		printf("Number not found");
	else
		printf("Number found at position %d",index);
}
