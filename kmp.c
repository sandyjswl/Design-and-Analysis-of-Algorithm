#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int next[50];

void flush(FILE *fp)
{
	char ch;
	while((ch=getc(fp))!='\n');
}
void compute_next(char p[], int m)
{
	next[1]=-1;
	next[2]=0;
	int i,j;
	
	for(i=3;i<=m;i++)
	{
		j=next[i-1]+1;
		while(p[i-1]!=p[j] && j>0)
		{
			j=next[j]+1;
		
		}
		next[i]=j;
	}



}



void kmp_string(char t[],char p[],int m, int n)
{
	int shift=0,i=1,j=1;
	while(i<=n)
	{
		if(p[j]==t[i])
		{
			i=i+1;
			j=j+1;
		}
		else
		{
			j=next[j]+1;
			if(j==0)
			{
				j=1;
				i=i+1;
			}
		}
		if(j==m+1)
		{
			printf("\nMatch occurs at Positin: %d",(i-m));
			shift=i-m;
			j=1;
			i=i+1;
		}

	}

}

int main()
{
	char text[20],pattern[10];
	int i;		
	printf("Enter the String");
	gets(text);
	flush(stdin);
	printf("Enter Pattern:");
	gets(pattern);
	flush(stdin);

	int n=strlen(text);
	int m=strlen(pattern);
			
	compute_next(pattern,m);
	flush(stdin);
	kmp_string(text,pattern,n,m);	


	for(i=1;i<=m;i++)
		printf("%d\t",next[i]);
	

}
