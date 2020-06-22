#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,c=0,i;
	cin>>n;
	while(n%2==0)
	{
		n=n/2;
		c++;
	}
	if(c)
	{
		cout<<"2 ";
	}
	for(i=3;i<=sqrt(n);i=i+2)
	{
		c=0;
		while(n%i==0)
		{
			c++;
			n=n/i;
		}
		if(c)
		{
			cout<<i<<" ";
		}
	}
	if(n>2)
	{
		cout<<n<<endl;
	}
	return 0;
}
