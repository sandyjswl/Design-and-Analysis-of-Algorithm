#include<stdio.h>
int a[5][5];
int i,k,j,n;

int flyod(int n)
{
	
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j];
				
}


int main()
{
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	
	printf("The Matrix is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			
		printf("\n");
	}
	flyod(n);
	printf("The Output is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			
		printf("\n");
	}

}
