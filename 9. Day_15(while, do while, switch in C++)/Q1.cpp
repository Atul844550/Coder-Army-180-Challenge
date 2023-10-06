#include<iostream>
using namespace std;

int main()
{
    int n, i=1;
    cout<<"enter the number:"<<endl;
    cin>>n;

    
    

    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            
        }
        i++;

    }
    



    do
    {
         if(i%2==0)
         {
            cout<<i<<" ";
         }
        
        i++;
    }
     while (i<=n);

}
    
