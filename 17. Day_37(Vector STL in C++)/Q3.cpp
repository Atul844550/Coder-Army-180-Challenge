#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an vector"<<endl;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

     for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //for max. element.

    int maximum= *max_element(v.begin(), v.end());
    cout<<"max"<<" "<<maximum;
    cout<<endl;

    //for min.

    int minimum= *min_element(v.begin(), v.end());
    cout<<"min"<<" "<<minimum;



    
}
