#include<iostream>
using namespace std;

int main()
{
    int i, j;
    
    int a[5]= {7, 5, 2, 4, 3};

    for(i=4; i>=1; i--)
    {
        for(j=i; j<=4; j++)
        {
            if(a[j-1] >a[j])
            {
                swap(a[j-1], a[j]);
            }
            else
            {
                break;
            }
        }
    }

    for(i=0; i< 5; i++)
    {
        cout<<a[i]<<" ";

    }


}
