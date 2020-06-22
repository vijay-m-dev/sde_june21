#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,c=0,i,t;
	cin>>n>>t;
	while(n%2==0)
	{
		n=n/2;
		c++;
		t--;
		if(t==0)
		{
			cout<<"2"<<endl;
			return 0;
		}
	}
	for(i=3;i<=sqrt(n);i=i+2)
	{
		c=0;
		while(n%i==0)
		{
			c++;
			n=n/i;
			t--;
			if(t==0)
			{
				cout<<i<<endl;
				return 0;
			}
		}
	}
	if(n>2 && t==1)
	{
		cout<<n<<endl;
		return 0;
	}
	cout<<"-1"<<endl;
	return 0;
}
