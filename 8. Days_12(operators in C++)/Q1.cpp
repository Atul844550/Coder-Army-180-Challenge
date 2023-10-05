#include<iostream>
using namespace std;

int main()
{
    int temperature;
    cout<<"enter the temperature:"<<endl;
    cin>>temperature;

    if(temperature>70 && temperature<90)
    {
        cout<<"yes you can go for the swimming"<<endl;
    }
    else{
        cout<<"sorry, you are not allowed to go for the swimming"<<endl;
    }
}
