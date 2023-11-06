#include<iostream>
using namespace std;
#include<vector>
#include<Algorithm>


int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(1);
    v.push_back(1);

    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
    cout<<count(v.begin(), v.end(), 1);
}
