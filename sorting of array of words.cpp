#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char names[5][20], tmp[20];
    int i,n, j;
    cout<<"Enter the no of words ";
    cin>>n;
    cout<<"enter the words one by one";
    for(i=0; i<n; i++)
        cin>>names[i];
    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(strcmp(names[j-1], names[j])>0)
            {
                strcpy(tmp, names[j-1]);
                strcpy(names[j-1], names[j]);
                strcpy(names[j], tmp);
            }
        }
    }
    cout<<"\nStrings (Names) in Alphabetical order:\n";
    for(i=0; i<n; i++)
        cout<<names[i]<<endl;
    cout<<endl;
    return 0;
}
