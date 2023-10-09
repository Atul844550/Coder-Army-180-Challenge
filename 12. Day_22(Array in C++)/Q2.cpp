#include<iostream>
using namespace std;

int main()
{
    int avg, i, sum=0;

    int a[18];

    int n= sizeof(a)/sizeof(a[0]);

    for(i=0; i<18; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<18; i++)
    {
        int sum=sum+ a[i];
    }

    avg= sum/n;
    cout<<avg;
}
