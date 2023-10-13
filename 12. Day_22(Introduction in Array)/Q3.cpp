#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n, target, index=-1;
    cout<<"enter the total no. of elements in  array"<<endl;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"enter the target element that you want to know the index of that"<<endl;
    cin>>target;

   
    
    for(i=0; i<n; i++)
    {
        if(a[i]==target)
        {
            index=i;
             
            break;
        }
    } 
    if(index!=-1)
    {
        cout<<index;
    }   
    else{
        return -1;
    }


}
