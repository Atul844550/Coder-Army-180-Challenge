#include<iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int size;
    int top;

    stack(int s)
    {
        size=s;
        arr= new int[s];
        top=-1;
    }

    void push(int value)
    {
        if(top== size-1)
        {
            cout<<"stack overflow condiiton"<<endl;
        }
        else
        {
            top=top+1;
            arr[top]= value;
            cout<<value<<"is inserted"<<endl;

        }
    }

    int pop()
    {
        if(top== -1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int isempty()
    {
        if(top==-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int issize()
    {
        return top+1;
    }

};

int main()
{
    stack s(5);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    cout<<s.pop()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.peek();
    

}
