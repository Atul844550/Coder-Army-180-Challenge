#include<iostream>
using namespace std;

int passingnum(int a,int b, int c)
{
    b=a;
    c=b;
    a=c;

    return c;

}
    

int main()
{
    int x,y,z;
    cout<<"enter the numbers"<<endl;
    cin>>x>>y>>z;
    cout<<passingnum(x,y,z);
}
