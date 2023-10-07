#include<iostream>
using namespace std;

int main()
{
    int n, sum=0, mul=1, rem;
    cout<<"enter the decimal no.";
    cin>>n;

    for(; n!=0;)
    {
        rem=n%2;
        n=n/2;
        sum= sum+rem*mul;
        mul= mul*10;
    }
    cout<<"the binary no. is:";
    cout<<sum;
}
