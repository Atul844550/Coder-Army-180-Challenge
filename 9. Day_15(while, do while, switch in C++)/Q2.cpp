#include<iostream>
using namespace std;

int main()
{
    int n, fact=1, i=1;
    cout<<"enter the number:"<<endl;
    cin>>n;

 
 
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<fact;




    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    cout<<fact<<" ";


}
