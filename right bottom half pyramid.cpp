#include<iostream>
using namespace std;
int main()
{
	int n,i,s,j;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++){
		cout<<" ";}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<"\n";
}
}


