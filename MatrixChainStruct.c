#include<stdio.h>

typedef struct mat
{
	int s[5][5];
	int m[5][5];


}Mat;
Mat mp;
void print_optimal(int,int);


int matrixchain(int p[], int length)

{
	int n,q;
	int i,j,k,l;
	
	n=length-1;
	for(i=1;i<=n;i++)
		mp.m[i][i]=0;
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			mp.m[i][j]=999999;
			for(k=i;k<=j-1;k++)
			{
				q=mp.m[i][k]+mp.m[k+1][j]+p[i-1]*p[k]*p[j];
				if (q< mp.m[i][j])
					mp.m[i][j]=q;
				
			mp.s[i][j]=k;
			}
		}
	}
	print_optimal(1,4);
}

void print_optimal(int i,int j)
{
	if(i==j)
		printf("A%d",i);
	else
	{
		printf("(");
		print_optimal(i,mp.s[i][j]);
		print_optimal((mp.s[i][j])+1,j);
		printf(")");

	}
	

}



main()
{
	int a[5],i;
	printf("Enter the Dimensions:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	matrixchain(a,5);
	//print_optimal(1,4);
}
