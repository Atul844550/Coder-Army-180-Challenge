#include<iostream>
using namespace std;

int main()
{
    int n, sum=0, mul=1, rem;
    cout<<"enter the decimal no.";
    cin>>n;

    for(; n!=0;)
    {
        rem=n%8;
        n=n/8;
        sum=sum+rem*mul;
        mul=mul*10;

    }
    cout<<"the octal no. is";
    cout<<sum;


}
