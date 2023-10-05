#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout<<"enter the no.";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(i%4==0)
        {
            cout<<i<<endl;
        }
    }
}
