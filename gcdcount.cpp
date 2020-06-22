#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,c=0,m1=1,m2,k;
	cin>>n;
	k=n;
	while(m1<=n)
	{
		m2=n/k;
		c+=(m2-m1+1)*k;
		m1=m2+1;
		k=n/m1;
	}
	cout<<c<<endl;
	return 0;
}
