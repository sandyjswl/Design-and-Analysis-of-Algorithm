#include<stdio.h>
#include<math.h>



void nqueen(int k, int n, int x[])
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k-1;j++)
		{
			if(x[j]==i || abs(x[j]-i)== abs(j-k))
			{
				break;
			}
		}
		if(j==k)
		{
			x[k]=i;

			if(k==n)
			{
				printf("Solution Array is :");
				for(i=1;i<=n;i++)
				{
					printf("%d\t",x[i]);
				}
				printf("\n");	
			}	
			else
			{	
				nqueen(k+1,n,x);
			}
		}
	}

}

main()
{
	int x[4];
	int i,j,k,n;

	printf("Enter the number of queens:\n");
	scanf("%d",&n);
	nqueen(1,n,x);
}
