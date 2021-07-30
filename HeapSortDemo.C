#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
void heapify(int a[],int n,int i);
void heapsort(int a[],int n);
int main()
{
	int a[20],n,i=0;
	printf("\n\tEnter the no of elements: ");
	scanf("%d",&n);
	printf("\n\tEnter the elements for heapsort: ");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	heapsort(a,n);
	printf("\n\tValues After heapsort:");
	for(int j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
void heapify(int a[],int n,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[left]>a[largest])
	largest=left;
	if(right<n && a[right]>a[largest])
	largest=right;
	if(largest!=i)
	{
		swap(&a[i],&a[largest]);
		heapify(a,n,largest);
	}
}
void heapsort(int a[], int n)
{
	for(int j=n/2-1;j>=0;j--)
	heapify(a,n,j);
	for(int j=n-1;j>=0;j--)
	{
		swap(&a[0],&a[j]);
		heapify(a,j,0);
	}
}

