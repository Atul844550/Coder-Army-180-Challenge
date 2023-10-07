#include<iostream>
using namespace std;

int main()
{
    int n, mul=1, rem, sum=0;
    cout<<"enter the binary no.:";
    cin>>n;

    for(; n!=0;)
    {
       rem = n%10;
       n=n/10;
       sum=sum+ rem*mul;
       mul=mul*2;

    }
    cout<<"the decimal no is:";
    cout<<sum;


}
