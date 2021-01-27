#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,l,b;
    cin>>n>>m>>a;
    l=n/a;
    if(n%a!=0)
        l++;
    b=m/a;
    if(m%a!=0)
        b++;
    cout<<(l*b);
    return  0;
}
