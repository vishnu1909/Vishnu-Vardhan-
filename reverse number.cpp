#include<iostream>
using namespace std;
int main()
{
	int n,r,reverse=0,tmp;
	cout<<"enter the number";
	cin>>n;
	tmp=n;
	while(n>0)
	{
		r=n%10;	
		reverse=reverse*10+r;
		n=n/10;
	}
	n=tmp;
	if(n==reverse){
	cout<<"palindrome";}
	else 
	cout<<"not a palindrome";
}
