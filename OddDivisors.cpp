#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		while(n!=1)
		{
			if(n%2==0)
				n=n/2;
			else
				break;
		}
		if(n==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
