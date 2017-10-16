#include<stdio.h>

int quicksort(int a[],int low,int up)
{
        if (low>=up)
                return -1;
        int pivloc;
        pivloc=pivotlocation(a,low,up);
        quicksort(a,low,pivloc-1);
        quicksort(a,pivloc+1,up);
}

int pivotlocation(int a[],int low,int up)
{
        int i,j,temp;
        i=low-1;
        for(j=low;j<=up-1;j++)
        {
                if (a[j]<=a[up])
                {
                        i=i+1;
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                }
        }
        temp=a[i+1];
        a[i+1]=a[up];
        a[up]=temp;
        return (i+1);
}

main()
{
        int a[6];
        int i,j,k,pivot;
        printf("Enter 6 Elements:\n");
        for(i=0;i<6;i++)
     
