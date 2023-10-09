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
        cout<<" ";
    }

    for(int i=0; i<20; i++)
    {
        cout<<a[i];
        
    }

    for(int j=0; j<20; j++)
    {
        int sum=sum+ a[j];
    
    }
    cout<<sum;
    

    
    
    
    
}
