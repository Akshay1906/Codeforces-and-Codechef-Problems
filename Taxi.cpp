#include <bits/stdc++.h> 

using namespace std;
int main()
{
	int n,taxis=0;
	cin>>n;
	vector <int> arr;
	for(int i=0;i<n;i++)
	{
		int element;
		cin>>element;
		arr.push_back(element);
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==4)
			taxis++;
		else
		{
			for(int j=i+1;j<n;j++)
			{		
				if(arr[i]+arr[j]==4)
				{
					taxis++;
					arr[j]=0;
					break;
				}
			}
			taxis++;
				
		}
		
	}

	cout<<"\n"<<taxis;
	return 0;
}
