#include<iostream>
using namespace std;

class customer1
{
    public:
    string name;
    long long  acc_no;
    double acc_balance= 10000;

    void deposit(int amount)
    {
        acc_balance+=amount;
        cout<<acc_balance<<endl;
    }

    void withdrawl(int amount1)
    {
        if(acc_balance<=amount1)
        {
            cout<<"insufficient balance<<endl;";
        }
        acc_balance-=amount1;
        cout<<acc_balance<<endl;
    }

    void transfer(int targetamount, int amount2)
    {
        targetamount+= amount2;
        acc_balance-= amount2;
        cout<<targetamount<<endl;
    }

    void detail()
    {
        name="rajkumar verma";
        acc_no=45789688745632;
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<acc_balance<<endl;
    }

};

int main()
{
    customer1 cus;
    cus.deposit(1000);
    cus.withdrawl(5000);
    cus.transfer(4000, 2000 );
    cus.detail();


}

