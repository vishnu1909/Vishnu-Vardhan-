#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[100],c;
	int i,j,len,n;
	cout<<"enter the no of alphabets";
	cin>>n;
	cout<<"enter the alphabets one by one ";
	for(i=0;i<n;i++)
	{
		cin>>str[i];
		len=strlen(str);
	}
	{
	    for(i=0;i<=len;i++)
		for(j=i+1;j<=(len-1);j++){
			if(str[i]>str[j]){
				c=str[i];
				str[i]=str[j];
				str[j]=c;
			}
		}
		for(i=0;i<n;i++)
		cout<<"the assending order is "<<str;
}
}
