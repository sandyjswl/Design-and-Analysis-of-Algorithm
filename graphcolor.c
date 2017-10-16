#include<stdio.h>
#include<math.h>
void mcolor(int,int);
int g[30][30],sol=0,x[30],m;
main()
{
	int i,j,k,n;
	printf("enter the number of vertics");
	scanf("%d",&n);
	printf("enter the number of colors");
	scanf("%d",&m);
		
	printf("enter the elements row wise");
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
			scanf("%d",&g[i][j]);
	}
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
			printf("%5d",g[i][j]);
		printf("\n");
	}
	printf("\nColor Combination:");	
	mcolor(n,1);
	
		printf("total number of input solution %5d",sol);
		
	return(0);
}

void mcolor(int n,int k)
{
	int i,j,l;
	while(1)
	{
		while(1)
		{
			x[k]=(x[k]+1)%(m+1);
			if(x[k]==0)
				return;
			for(j=1;j<=n;j++)
			{
				if(g[k][j]!=0 && x[j]==x[k])
					break;
			}
			if(j==n+1)
				break;
		}
		if(k==n)
		{
			sol++;
			for(i=1;i<=n;i++)
				printf("%5d",x[i]);	
			printf("\n");
		}
		else
			mcolor(n,k+1);
		
	}
}
