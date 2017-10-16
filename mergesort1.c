#include<stdio.h>

int mergesort(int a[],int p,int r)
{
	if (p<r)
	{
		int q;
		q=((p+r)/2);
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
	
}

int merge(int a[],int p,int q,int r)
{
	int n1,n2,i,j,k;
	int l[20],m[20];
	n1=(q-p+1);
	n2=(r-q);

	
	for(i=1;i<=n1;i++)
	{
		l[i]=a[p+i-1];
	}
	for(j=1;j<=n2;j++)
		m[j]=a[q+j];

	l[n1+1]=99999;
	m[n2+1]=99999;
	i=1;
	j=1;
	for(k=p;k<=r;k++)
	{
		if(l[i]<m[j])
		{
			a[k]=l[i];
			i=i+1;
		}
		else
		{
			a[k]=m[j];
			j=j+1;
		}
	}

}

main()
{
	int a[8];
	int i,j,k,pivot;
	printf("Enter 6 Elements:\n");
	for(i=1;i<=6;i++)
		scanf("%d",&a[i]);
	printf("before sorting:\n");
	for(i=1;i<=6;i++)
		printf("%d\t",a[i]);
	mergesort(a,1,6);
	
	printf("\nafter sorting:\n");
	for(i=1;i<=6;i++)
		printf("%d\t",a[i]);

}


