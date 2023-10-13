#include<iostream>
using namespace std;

int main()
{
    int i, sum=0;

    int a[18];

    int n= sizeof(a)/sizeof(a[0]);

    for(i=0; i<18; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<18; i++)
    {
        sum=sum + a[i];
    }

    int avg= sum/n;
    cout<<avg;
}
