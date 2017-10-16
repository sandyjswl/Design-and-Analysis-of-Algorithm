#include<stdio.h>

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
}

void countsort(int a[], int size, int largest)
{
	int i,j;
	int b[20],c[20];

	for(i=0;i<size;i++)
		b[i]=0;

	for(j=0;j<size;j++)
		b[a[j]]++;

	for(i=0;i<=size;i++)
	{
		if(b[i]!=0)
		{
			for(j=0;j<b[i];j++)
			{
				a[j]=i;
				printf("\t%d",a[j]);
			}
		}
	}

/*	for(i=0;i<size;i++)
		printf("\t%d",b[i]);*/
}


main()
{
	int a[10];
	int i,j,n,largest;

	printf("Enter size:\n");
	scanf("%d",&n);


	printf("Enter %d elements:\n",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=0;
	for(j=0;j<n;j++)
	{
		if(a[j]>largest)
		{
			largest=a[j];
		}		
	}

//	printf("\nBefore sorting:\n");
//	display(a,n);

//	printf("\nAfter sorting:\n");
	countsort(a,n,largest);

}
