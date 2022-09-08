#include<iostream>
using namespace std;
int main(){
int c,n,i;
cout<<"enter a number";
cin>>n;
for(i=1;i<=n;i++){
if(n%i==0)
c++;
}
if(c==2)
cout<<"it is a primenumber";
else 
cout<<"not a prime number";
}
