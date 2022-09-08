#include<iostream>
using namespace std;
int main()
{
	int i,m,n,k;
	cout<<"enter starting value:";
	cin>>m;
	cout<<"enter the ending value:";
	cin>>n;
	cout<<"enter the skipping number:";
	cin>>k;
	for(i=m;i<=n;i+=(k+1))
	{
	cout<< i<<endl ;
	}
}
