#include<iostream>
using namespace std;
int arr[11]={0,1,2,3,4,5,6,7,8,9,10};
int main()
{
	int n;
	cin>>n;
	for(int i=10;i>=1;i--)
	{
		if(n%arr[i]==0)
		{
			cout<<arr[i];
			break;
		}
	}
	
	return 0;
}
