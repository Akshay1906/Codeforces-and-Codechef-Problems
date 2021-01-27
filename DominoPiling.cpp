#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n==1)
	{
		cout<<m/2;
		return 0;
	}

	else if(n%2==0)
	{
		cout<<(n/2 * m)<<endl;
	}
	else
	{
		cout<<(m*(n/2))+m/2<<endl;
	}
	return 0;
}
