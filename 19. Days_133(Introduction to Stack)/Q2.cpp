#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

class stack
{
    node *top;
    int size;
    public:
    stack()
    {
        top=NULL;
        size=0;
    }

    void push(int value)
    {
        node *temp= new node(value);
        temp->next= top;
        cout<<temp->data<<"is inserted"<<endl;;
        top=temp;
        size++;
    }

    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack undeflow"<<endl;
            
        }
        else{
            node *temp=top;
            cout<<temp->data<<"is deleted"<<endl;
            top=top->next;
            size--;
            delete temp;
        }
    }

    int peek()
    {
        if(top==NULL)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }

    int isempty()
    {
        if(top==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int issize()
    {
        return size;
    }
};

int main()
{
    stack s;
    s.push(50);
    s.push(5);
    s.push(60);
    s.push(70);
    s.push(85);
    s.pop();
    s.pop();
    cout<<s.isempty();
    cout<<s.peek();
    cout<<s.issize();


}
