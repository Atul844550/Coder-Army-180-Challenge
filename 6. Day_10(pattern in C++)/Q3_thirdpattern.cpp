#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the numbers:"<<endl;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<" ";

        }
        for(int j=n; j>=i; j--)
        {
            cout<<j;

        }
        cout<<endl;
    }
}
