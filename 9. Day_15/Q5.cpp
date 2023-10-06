#include<iostream>
using namespace std;

int main()
{
    char abc, pop;
    char i='A';
    char j='a';
    cout<<"enter the charracter"<<endl;
    cin>>abc;
    cin>>pop;

    while(i<=abc && j<=pop)
    {
        cout<<i<<" "<<endl;
        i++;
        cout<<j<<" ";
        
        j++;
    }

}
