#include<iostream>

using namespace std;

int main()
{
    int a[20];
    int sum=0;
    cout<<"enter the elements:"<<endl;

    for(int i=0; i<20; i++)
    {
        cin>>a[i];
       
    }

    for(int i=0; i<20; i++)
    {
        cout<<a[i];
    }

    cout<<endl;

    for(int i=0; i<20; i++)
    {
        sum=sum + a[i];
    }

    cout<<sum;

    return 0;
   
    
}
