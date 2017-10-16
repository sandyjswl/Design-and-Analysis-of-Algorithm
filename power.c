#include<stdio.h>

int power(int base,int pow)
{
	if(pow==0)
		return 1;
	else
	{
		if(pow %2==0)
			return (power(base,pow/2)*power(base,pow/2));
		else
			return (base*power(base,pow/2)*power(base,pow/2));
	}
}

int main()
{
	int base;
	int pow;
	int res;
	printf("Enter BASE:\t");
	scanf("%d",&base);
//	printf("Enter Power in Integers:\t");
//	do{
       printf("Enter Power in Integers:\t");

	scanf("%d",&pow);
//	}while(pow<0);
	res=power(base,pow);
	printf("\n %d to the power %d is  %d\n",base,pow,res);

}
