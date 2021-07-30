#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int Partition(int A[],int start, int end)
{ 
    int pivot = A[end];   
    int i = (start - 1);  
    for (int j = start; j <= end- 1; j++) 
    { 
        
        if (A[j] < pivot) 
        { 
            i++;    
            swap(&A[i], &A[j]); 
        } 
    } 
    swap(&A[i + 1], &A[end]); 
    return (i + 1); 
} 
void QuickSort(int A[],int start,int end)
{
	if(start<end)
	{
	int q=Partition(A,start,end);
	QuickSort(A,start,q-1);
	QuickSort(A,q+1,end);
    }
}

void printArray(int A[],int size)
{
	int i;
	for(i=0;i<size;i++)
	 printf("%d ",A[i]);
	 printf("\n");
}
int main()
{
	int A[]={17,6,15,4,3,2,1,0};
	int n=sizeof(A)/sizeof(A[0]);
	QuickSort(A,0,n-1);
	printf("Sorted array:\n");
	printArray(A,n);
	return 0;
}
