#include<iostream>
using namespace std;

void reverse(int n)
{
    int rem, sum=0;
    while(n!=0)
    {
        if(n<=5000 && n>=-5000)
        {
            rem=n%10;
            n=n/10;
            sum=sum*10+rem;

        }
        

    }
    cout<<sum;
    
}

int main()
{
    int a;
    cout<<"enter the number:"<<endl;
    cin>>a;
    reverse(a);
    

}
