#include<iostream>
using namespace std;
bool check(long long int n)
{
	if(n<2020)
		return false;
	long long int rem=0;
	long long int quo=0;
	if(n%10==1)
	{
		rem=n % 2020;
		quo=n / 2020;
		if(n == (2020*quo+rem))
			return true;
	}
	else if(n%10==2)
	{
		rem=n % 2021;
		quo=n / 2021;
		if(n == (2021*quo+rem))
			return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int k=check(n);
		if(k==0)
			cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		
	}
	return 0;
}
