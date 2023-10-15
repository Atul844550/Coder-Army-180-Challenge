#include<iostream>
using namespace std;

int main()
{
    int a[6]= {8,7,4,3,2,1};
    int index, i, j,res;

    for(i=0; i<6; i++)
    {
        index=i;

        for(j=i+1; j<=5; j++)
        {
            if(a[index]> a[j])
            {
                index=j;
            }
        }
         swap(a[index], a[i]);
       
        

    } 

    for(i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }

}

        
    
