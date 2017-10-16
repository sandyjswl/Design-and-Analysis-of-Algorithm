#include<stdio.h>

int heapify(int a[],int n, int i)
{
	int largest,l,r,temp;
	l=2*i;
	r=2*i+1;
	
	if(l<=n && a[l]>a[i])
		largest=l;
	else
		largest=i;
	
	if(r<=n && a[r]>a[largest])
		largest=r;
	
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,n,largest);
	}
}

void max_heap(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		heapify(a,n,i);
}
int heapsort(int a[], int n)
{
	int i,j,temp,size=n;
	
	max_heap(a,n);

	for(j=n;j>=2;j--)
	{
		temp=a[j];
		a[j]=a[1];
		a[1]=temp;
		size--;
		heapify(a,size,1);
	}		


}



main()
{
	int a[10];
	int i,j,n;

	printf("Enter size of array:\n");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	printf("Before sorting;\n");
	for(i=1;i<=n;i++)
		printf("%d",a[i]);
	
	heapsort(a,n);

	printf("after sorting:\n");
	for(i=1;i<=n;i++)
		printf("\t%d\t",a[i]);
}
