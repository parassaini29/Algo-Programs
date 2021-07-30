#include<iostream>
using namespace std;
int main()
{
	int a[20],size,i,j,temp;
	cout<<"\n\tEnter the size of the array:";
	cin>>size;
	cout<<"\n\tEnter the elements in the array:";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"\n\tArray after insertion sort:";
	for(i=0;i<size;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
