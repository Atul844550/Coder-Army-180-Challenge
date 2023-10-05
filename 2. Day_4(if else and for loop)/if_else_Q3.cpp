#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter the number:"<<endl;
    cin>>n;

    if(n>0 && n<13)
    {
        if(n==1)
        {
            cout<<"January";
        }
        else if(n==2)
        {
            cout<<"Febuary";
             
        }
        else if(n==3)
        {
            cout<<"march";
        }
        else if(n==4)
        {
            cout<<"april";
        }
        else{
            cout<<"Don't know";
        }
    }
}
