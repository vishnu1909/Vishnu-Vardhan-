#include<iostream>
using namespace std;
	class father
	{
		public:
		void a()
		{
			cout<<"a";
		}
	};
	class mother:public father
	{
		public:
		void b()
		{
			cout<<"b";
			}
	};
	class brother:public father
	{
		public:
		void c()
		{
			cout<<"c";
		}
	};
	class sister:public brother,public mother
	{
		public:
		void d()
		{
			cout<<"d";
		}
	};
	
	int main()
	{
		mother O1;
	    brother O2;
		sister O3;
		O1.a();
		O1.b();
		O2.a();
		O2.c();
		O3.d();
		O3.c();
		O3.b();
	return 0;
}
