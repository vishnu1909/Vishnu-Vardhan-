#include<iostream>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i%5==0)
		{
			continue;
		}
		else
		{
			std::cout<<i;
		}
	}

}
