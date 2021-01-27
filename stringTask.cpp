#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	string str2;
	 int n=str.length();
	if(n>100)
		return 0;
	for( int i=0;i<n;i++)
	{
		if(isupper(str[i]))
			str2[i]=tolower(str[i]);
		else
			str2[i]=str[i];
	}
	for(int i=0;i<n;i++)
	{
		if(str2[i]=='a' || str2[i]=='e' ||
				str2[i]=='i' || str2[i]=='o' || str2[i]=='u' || str2[i]=='y'){
		}
		else
		{
			cout<<"."<<str2[i];
		}
	}
		
	return 0;
}
