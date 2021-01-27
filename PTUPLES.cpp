#include<bits/stdc++.h>
using namespace std;
const int N=1000001;

vector <bool>arr(N,true);
int ans[N]={0};

void seive(long long int N)
{
	for(int i=2;i<=sqrt(N);i++)
	{
		if(arr[i])
		{
			for(int j=i*i;j<=N;j+=i)
				arr[j]=false;
		}
	}
}
void counts()
{
	
	int count=0;
	for(int i=5;i<N;i++)
	{
		if(arr[i] && arr[i-2])
			count++;
		ans[i]=count;
	}
}
int main()
{
	seive(1000000);
	counts();
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
	
	return 0;
}
