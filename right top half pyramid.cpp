#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++){
		cout<<" ";}
		for(k=1;k<=i;k++)
		{
			cout<<"*";
		}
	cout<<"\n";
}
}


