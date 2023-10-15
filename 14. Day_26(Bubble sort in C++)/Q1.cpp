#include<iostream>
using namespace std;

int main()
{
    int i,j;

    int a[6]= {5, 8, 2 ,1, 9 ,7};

    for(i=4; i>=0; i--)
    {
        for(j=0; j<5; j++)
    {
        if(a[j]< a[j+1])
        {
            swap(a[j], a[j+1]);
        }
    }

    
    }

    for(i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }

}
