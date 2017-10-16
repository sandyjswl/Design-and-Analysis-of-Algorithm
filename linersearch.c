#include<stdio.h>

int linersearch(int a[],int size,int key)

{
	int i;
	for( i=0;i<size;i++)
	{
		if (a[i]==key)
			return i;
	}
	return -1;
}

main()
{
	int a[5],key,index,i;
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("ENter the Value to search:\n");
	scanf("%d",&key);
	index=linersearch(a,5,key);
	if (index==0)
		printf("Number Not found");
	else
		printf("Number found at positin %d",index);
}
