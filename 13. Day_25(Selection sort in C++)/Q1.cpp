#include<iostream>
using namespace std;

int main()
{
    int a[6]= {4, 8 ,1, 2, 9, 7 };
    int index;

    for(int i=0;  i<6; i++)
    {
        index=i;
        for(int j=i+1; j<=5; j++)
        {
            if(a[j]>a[index])
            {
                index=j;
            }
        }
        swap(a[i], a[index]);

    }

    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }


}
