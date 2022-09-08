#include <iostream>
using namespace std;
int main()
{
    int h,i,j,k;
    cout << "Enter the height of the triangle : ";
	cin >> h;
    for (i=1;i<=h;i++)
    {
        for (j=1;j<=(h-i);j++)
        {
            cout << " ";
        }
        for (k=1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == h)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
        }
        }
        cout << endl;
    }
    return 0;
}
