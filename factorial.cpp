#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"enter a number to find factorial";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	fact*=i;
	}
	cout<<fact;
}
