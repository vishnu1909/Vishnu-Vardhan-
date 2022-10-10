#include<iostream>
using namespace std;
class name{
	public:
		int t;
		name (int a,int b){
			t=a;
			a=b;
			b=t;
			cout<<"a="<<a<<"b="<<b;
		}
};
int main(){
	name o(5,10);
	return 0;
}
