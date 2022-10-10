#include<iostream>
class base 
{
	public:
		a(){
			cout<<"a";
		}
};
class base2
{
	public:
		d(){
			cout<<"d";
		}
};
class Derived:public base,public base2
{
	public:
	b()
	{
		cout<<"b";
	}
};
int main()
{
	Derived obj;
	obj.b();
	obj.a();
	obj.d();
	return 0;
}
