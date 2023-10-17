#include<iostream>
using namespace std;

int binarysearch(int a[], int n, int key)
{
    int mid, start=0,end=n-1;

    while(start<=end)
    {
        mid= (start+end)/2;
        if(a[mid]== key)
        {
            return mid;
        }
        else if(a[mid]< key)
        {
            end= mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int key , n;
    int a[1000];
    cout<<"enter the size of a array"<<endl;
    cin>>n;
    cout<<"enter the elements in descreasing order"<<endl;
    for(int i=0; i<n; i++)
    {
         cin>>a[i];

    }
    cout<<"enter the key you want to search:"<<endl;
    cin>>key;

    cout<<binarysearch(a, n, key);

    return 0;
    

}
