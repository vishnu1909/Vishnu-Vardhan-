#include <iostream>
using namespace std;
int main()
{
	int i,n,m,a[10];
	cout<<"enter the number elements to be entered";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the numbers";
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	cout<<"largest number"<<a[0]<<endl;
		for(i=1;i<=n;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
	cout<<"smallest number"<<a[0];
}
}}
