#include<iostream>
using namespace std;

int  main()
{
    int age;

    cout<<"enter your age"<<endl;
    cin>>age;

    if(age<=12 || age>=65)
    {
        cout<<"yor are eligible to get discount";
    }
    else{
        cout<<"sorry you are not eligible for discount you had a flat cost";
    }
}

