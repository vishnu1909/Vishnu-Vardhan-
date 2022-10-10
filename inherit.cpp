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
	class sister:public father
	{
		public:
		void d()
		{
			cout<<"d";
		}
	};
	
	int main()
	{
	    brother O2;
		sister O3;
		mother O1;
		O1.a();
		O1.b();
		O2.a();
		O2.c();
		O3.a();
		O3.d();
	return 0;
}
