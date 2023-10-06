#include<iostream>
using namespace  std;

int main()
{
    int n, i=1, count=0;
    cout<<"enter th number:"<<endl;
    cin>>n;

    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        cout<<"the no.is prime"<<endl;
    }
    else{
        cout<<"not prime";
    }


}
