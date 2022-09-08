#include<iostream>
class base 
{
	public:
		a(){
			std::cout<<"a";
		}
};
class base2
{
	public:
		d(){
			std::cout<<"d";
		}
};
class Derived:public base,public base2
{
	public:
	b()
	{
		std::cout<<"b";
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
