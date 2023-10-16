#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int a[6]= {7, 2, 4, 6, 9, 3};

    for(i=1; i<6; i++)
    {
        for(j=i; j>0; j--)
    {
        if(a[j]> a[j-1])
        {
            swap(a[j], a[j-1]);
        }
        else
        {
            break;
        }
    }
    }

    for(i=0; i< 6; i++)
    {
        cout<<a[i]<<" ";

    }
}

