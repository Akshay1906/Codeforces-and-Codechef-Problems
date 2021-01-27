#include<bits/stdc++.h>
#include<string>
using namespace std;
bool checkStrong(string str)
{
	int upCase=0,lowCase=0,digit=0,sym=0;
	int n=str.length();
	if(n<10)
		return false;
	else
	{
		for(int i=0;i<n;i++)
		{
			if ((str[i] >=97 && str[i] <= 122) )
					lowCase=1;
			
			else if(i>0 && i<n-1)
			{
				if(str[i] >=65 && str[i] <= 90)
					upCase=1;
			
				if( (str[i] >=48  && str[i] <= 57) )
					digit=1;
			
				if((str[i]=='@' || str[i]=='#' || str[i]=='&'
				|| str[i]=='?' || str[i]=='%') )
					sym=1;
			}
		}
		
		if(upCase && lowCase && digit && sym)
			return true;
		else 
			return false;
	}
	 
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		bool k;
		k=checkStrong(str);
		if(k==1)
		    cout<<"YES"<<endl;
		else
		    cout<<"NO"<<endl;
	}
	return 0;	
}
