#include <algorithm> 
#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(1);
    v.push_back(1);
	
    auto lower = lower_bound(v.begin(), v.end(), 6);
	auto upper = upper_bound(v.begin(), v.end(), 5);

	cout << "lower_bound for 6 at index "<< (lower - v.begin())<<endl;
	cout << "upper_bound for 5 at index "<< (upper - v.begin())<<endl;;

	
}
