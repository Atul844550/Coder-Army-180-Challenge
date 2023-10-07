#include<iostream>
using namespace std;

int main()
{
    int n, sum=0, mul=1, rem;
    cout<<"enter the octal no.";
    cin>>n;

    for(; n!=0;)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*mul;
        mul=mul*8;

    }
    cout<<"the decimal no. is";
    cout<<sum;
}
