#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        static int k;
    Base()
    {
        i = 10;
        j = 20;
        cout<<"Inside Base Constructor\n";
    }

    void fun()
    {
        cout<<"Base fun\n";
    }    
};  
int Base::k = 11;

class Derived : public Base
{
    public:
        int x,y;
    Derived()
    {   
        x = 50;
        y = 60;
        cout<<"Inside Derived Constructor\n";
    }    
    void gun()
    {
        cout<<"Inside Derived gun\n";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";         //8
    cout<<sizeof(dobj)<<"\n";         //16

    cout<<bobj.i<<"\n";               //10
    cout<<bobj.j<<"\n";               //20

    cout<<dobj.i<<"\n";               //10
    cout<<dobj.j<<"\n";               //20
    cout<<dobj.k<<"\n";               //11
    cout<<dobj.x<<"\n";               //50

    bobj.fun();
    dobj.fun();
    dobj.gun();
 

    return 0;
}