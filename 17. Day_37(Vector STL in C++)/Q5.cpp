#include <algorithm> 
#include <iostream>
#include <vector> 

using namespace std;

 void show(vector<int> &v)
    {
        
     v.push_back(4);
     v.push_back(5);
     v.push_back(1);
     v.push_back(8);
     v.push_back(1);
     v.push_back(1);

    }

int main()
{
    vector<int> v;

    v.push_back(7);
    v.push_back(0);
      show(v);

    for(int i=0; i< v.size(); i++)
    {
       cout<<v[i]<<" ";
    }

    return 0;


}
