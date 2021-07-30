#include<iostream>
using namespace std;

int main()
{
	int arr[20],size,temp,swap,i,j;
	cout<<"\n\tEnter the size of the array:";
	cin>>size;
	cout<<"\n\tEnter the array elements:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<(size-1);i++)
	{
		swap=0;
		for(j=0;j<(size-i)-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			swap=1;	
			}
		}
			if(swap==0)
			{
				break;
			}
	}
		cout<<"\n\tArray after bubble sort: ";
		for(i=0;i<size;i++)
		{
			cout<<" "<<arr[i];
		}
		return 0;
	
}
