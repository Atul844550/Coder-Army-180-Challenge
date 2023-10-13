#include <iostream>
using namespace std;

int main() {
    
    int arr[20], n;

    cout<<"how many element you want to insert:"<<endl;
    cin>>n;

    if(n<3)
    {
        cout<<"invalid input";
    }

    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
        cout<<" ";
    }

    int first_max = INT_MIN; 
    int second_max = INT_MIN; 

    for (int i = 0; i <n; i++) {
        if (arr[i] > first_max) {
            
            second_max = first_max;
            first_max = arr[i];
        } 
        else if (arr[i] > second_max && arr[i] != first_max)
        {
            
            second_max = arr[i];
        }
    }

    if (second_max != INT_MIN) {
        cout << "The second largest element is: " << second_max<<endl;
    } else {
          cout << "There is no second largest element in the array."<<endl;
    }

    return 0;
}
