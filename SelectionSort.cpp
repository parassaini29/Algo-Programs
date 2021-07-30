#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,size,temp,loc,min;
	cout<<"\n\tEnter the size of the array: ";
	cin>>size;
	cout<<"\n\tEnter the elements in the array: ";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<(size-1);i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<size;j++)
		{
		if(a[j]<min)
		{
			min=a[j];
			loc=j;
		}
	}
	temp=a[i];
	a[i]=a[loc];
	a[loc]=temp;
}
	cout<<"\n\tArray afer selection sort: ";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
