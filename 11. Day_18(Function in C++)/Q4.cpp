#include<iostream>
using namespace std;

void Swap(int a, int b)
{
    if(a>=-10000 && b<=100000)
    {
        a= a-b;
        b=a+b;
        a= b-a;


    }

    cout<<a<<" "<<b;
}


int main()
{
    int x, y;
    cout<<"enter the first no."<<endl;
    cin>>x;
    cout<<"enter the second no."<<endl;
    cin>>y;
    Swap(x, y);

}
