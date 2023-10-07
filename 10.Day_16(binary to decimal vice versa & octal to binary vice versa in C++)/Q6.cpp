#include<iostream>
using namespace std;

int main()
{
    
    
    int n, sum=0, mul=1, rem, sum1, rem1, total=0, mul1=1;
    cout<<"enter the octal no.";
    cin>>n;

    for(; n!=0;)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*mul;
        mul=mul*8;

    }
    sum1=sum;

     for(; sum1!=0;)
    {
        rem1=sum1%2;
        sum1=sum1/2;
        total= total+rem1*mul1;
        mul1= mul1*10;
    }
    cout<<"the binary no. is:";
    cout<<total;
}


   


