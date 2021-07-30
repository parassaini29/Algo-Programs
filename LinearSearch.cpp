#include<iostream>
using namespace std;
int main()
{
	int i,n,search,count=0;
	cout<<"\n\tEnter the number of elements in array:";
	cin>>n;
	int arr[n];
	cout<<"\n\tEnter the "<<n<<" number:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n\tEnter a number to search:";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			cout<<"\n\t "<<search<<" present at location "<<i+1;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\n\t"<<search<<"is not present in the array:";
	}
	else
	{
		cout<<"\n\t "<<search<<" is present "<<count<<" times in array:  ";
	}
	return 0;
}
