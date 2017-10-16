#include<stdio.h>
#include<time.h>


int fibo(int n)
{
	if(n==1 || n==0)
		return 1;
	else
		return(fibo(n-2)+fibo(n-1));

}

main()
{
	int i,res;
	clock_t start,stop;
	double t;

/*	printf("Enter the Number:\t");
	scanf("%d",&n);*/
	
	for(i=0;i<=45;i++)
	{
		start=clock();
		res=fibo(i);
		stop=clock();
		t=(double)(stop-start)/CLOCKS_PER_SEC;
		printf("\n%lf",t);
	}
}
