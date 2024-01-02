#include<iostream>
using namespace std;

class car
{
    public:
    string model_name;
    int year;
    double fuellevel_cap=40; // in litre
    int speed;


    void  startengine(string voice)
    {
        if(voice== "kharkhar")
        {
            cout<<"the engine has been started"<<endl;
        }
        
    }

    void stopengine(string voice1)
    {
        if(voice1=="dumb")
        {
            cout<<"the engine has been stopped"<<endl;
        }
    }

    void accelerate()
    {
        if(speed>10 && fuellevel_cap>0)
        {
            cout<<"car is running"<<endl;
        }
        else if(speed<0)
        {
            cout<<"invalid speed"<<endl;
        }
    }

    void brake(int amount)
    {
        speed-=amount;
        cout<<speed<<endl;
    }

    void refuel(int amount1)
    {
        if(fuellevel_cap==0)
        {
            cout<<"you don't have a fuel for running the car"<<endl;
        }
        else if(fuellevel_cap<2)
        {
            fuellevel_cap+=amount1;
            cout<<fuellevel_cap;
        }


    }

    void status()
    {
        model_name= "Baleno";
        year= 2023;

    }



};  

int main()
{
    car ca;
    ca.startengine("kharkhar");
    ca.stopengine("dumb");
    ca.accelerate();
    ca.brake(20);
    ca.refuel(15);
    ca.status();
}
