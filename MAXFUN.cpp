#include<bits/stdc++.h>
using namespace std;
long long int maxfunc(long long int arr[],long long int n)
{
	long long int mini = INT_MAX;
	long long int maxi = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	long long int ans=maxi-mini;
	ans=ans*2;	
	return ans;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		cout<<maxfunc(arr,n)<<endl;
	}
	return 0;
}
