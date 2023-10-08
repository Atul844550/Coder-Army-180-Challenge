#include<iostream>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}

int fact(int n)
{
    int i, res=1;
    for(i=1; i<=n; i++)
    {
        res=res*i;
        
    }
    return res;
}





int main()
{
    int n, r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    cout<<nCr(n,r);

}
