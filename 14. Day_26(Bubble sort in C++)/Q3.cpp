#include<iostream>
using namespace std;

int main()
{
    int i, j;

    char a[6]={'a', 'g', 'z', 'f', 'l', 'c'};

    for(i=4; i>=0; i--)
    {
        for(j=0; j<5; j++)
    {
        if(a[j]> a[j+1])
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
