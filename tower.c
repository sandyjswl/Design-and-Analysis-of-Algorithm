#include<stdio.h>

tower(int n,char start, char end,char aux)
{
	if(n==1)
	{
		printf("\nMove disk 1 from %c tower to %c tower",start,end);
		return;
	}
	else
	{
		tower(n-1,start,aux,end);
		printf("\nMove disk %d from %c tower to %c tower",n,start,end);
		tower(n-1,aux,end,start);
	}

}

main()
{
	int n=4;
	tower(n,'A','C','B');
}
