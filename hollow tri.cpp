#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout << "enter the n value";
	cin >> n;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=(n-i);j++)
        {
            cout <<" ";
        }
        for (k=1;k<=i*2-1;k++)
        {
            if (k==1||k==i*2-1)
            {
                cout <<"*";
            }
            else if(i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}
