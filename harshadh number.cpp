#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r,d;
	cout<<"enter the number";
	cin>>n;
	d=n;
	while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	n=d;
	if(n%sum==0)
	{
		cout<<"harshadh number";
	}
	else
	cout<<"not a harshadh number";
}
