#include<iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		cout<<(2*r-2*l)+1<<endl;
	}
	return 0;
}
