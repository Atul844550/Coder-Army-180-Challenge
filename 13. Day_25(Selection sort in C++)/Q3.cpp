#include<iostream>
using namespace std;

int main()
{
    char a[6]= {'a', 't', 'q', 'b', 'p', 'w'};
    int i, j, index;

    for(i=0; i<6; i++)
    {
        index=i;

        for(j=i+1; j<=5; j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        swap(a[i], a[index]);
    }

    for(i=0;i<6; i++)
    {
        cout<<a[i]<<" ";
    }
}
