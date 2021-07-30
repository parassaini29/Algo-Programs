#include<stdio.h>
void countingsort(int a[],int n,int k,int b[]);
int main()
{
	int n,k,a[20],b[20];
	printf("\n\tEnter total number of values: ");
	scanf("%d",&n);
	printf("\n\tEnter the range of values: ");
	scanf("%d",&k);
	printf("\n\tEnter values in the given range: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	countingsort(a,n,k,b);
	printf("\n\tAfter sorting: ");
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}
	void countingsort(int a[],int n,int k,int b[])
	{
		int c[k];
	for(int i=0;i<k;i++)
		c[i]=0;
	for(int j=0;j<n;j++)
		 c[a[j]]=c[a[j]]+1;
	for(int j=1;j<k;j++)
		c[j]=c[j]+c[j-1];
    for(int i=n-1;i>=0;i--)
    {
    	b[c[a[i]]-1]=a[i];
    	c[a[i]]=c[a[i]]-1;
    }
    }

