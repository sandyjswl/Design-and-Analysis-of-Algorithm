#include<stdio.h>
#include<math.h>

int g[10][10];
int m;
int x[5];

void mcolour(int n, int k)
{

	
	int i,j,l;
	while(1)
	{
		while(1)
		{
			x[k]=x[k]+1%(m+1);
			if(x[k]==0)
			{
				return;

			}
			for(j=1;j<=n;j++)
			{
				if(g[k][j]!=0 && x[k]==x[j])
				{

					break;
				}

			}
			if(j==n+1)
				break;

		}
		if(k==n)
		{
			printf("SOLUTION");
			for(l=1;l<=n;l++)
				printf("%5d",&x[l]);
			printf("\n");
		}
		else
		{
			mcolour(n,k+1);
	

		}		


	}




}

main()
{
	
	int i,j;
	int n;

	printf("Enter the number of vertices:\n");
	scanf("%d",&n);


	printf("Enter the number of colors:\n");
	scanf("%d",&m);


	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&g[i][j]);

	printf("The Adjacency matrix is :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%5d",g[i][j]);
		}
		printf("\n");

	}
	mcolour(n,1);

}
