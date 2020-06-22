#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,g,c=0;
	cout<<"Enter no of elements: ";
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter gcd: ";
	cin>>g;
	for(i=0;i<n;i++)
	{
		if(arr[i]>g && arr[i]!=1)
		{
			c+=min(arr[i]%g,g-arr[i]%g);
		}
		else
		{
			c+=g-arr[i];
		}
	}
	cout<<c<<endl;
	return 0;
}
