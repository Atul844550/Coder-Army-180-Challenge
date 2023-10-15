#include<iostream>
using namespace std;

int main()
{
    int i, j;

    int a[6]= {8, 7, 2 ,4, 6, 3};

    for(i=4; i>=0; i--)
    {
        for(j=5; j>=0; j--)
    {
        if(a[j]< a[j-1])
        {
            swap(a[j], a[j-1]);
        }
    }

    }

    for(i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }

}
