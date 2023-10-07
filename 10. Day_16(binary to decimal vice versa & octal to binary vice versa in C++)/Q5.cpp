#include<iostream>
using namespace std;

int main()
{
    int n, mul=1, rem, sum=0,  rem1, sum1, result=0, mul1=1;
    cout<<"enter the binary no.:";
    cin>>n;

      for(; n!=0;)
    {
       rem = n%10;
       n=n/10;
       sum=sum+ rem*mul;
       mul=mul*2;

    }
    sum1=sum;

    for(; sum1!=0;)
    {
        rem1= sum1%8;
        sum1= sum1/8;
        result= result+ rem1*mul1;
        mul1=mul1*10;

    }
    cout<<"the octal is:"<<endl;
    cout<<result;
    


}
