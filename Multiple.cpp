    //Multiple Inheritance
#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()                               // Constructor
        {
            cout<<"Inside Demo constructor\n";
            x = 10;
            y = 20;
        }
        ~Demo()                              //Destructor
        {
            cout<<"Inside Demo destructor\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo\n";
        }      
};

class Hello 
{
    public:
        int a,b;
        Hello()                             //Constructor
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
        }
        ~Hello()                            //Destructor
        {
            cout<<"Inside Hello destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of hello\n";
        }
};

//Class Marvellous : public Hello , public Demo
class Marvellous : public Demo , public Hello
{
    public:
        int p;
        Marvellous()            //Constructor
        {
            cout<<"Inside Marvellous Constructor\n";
            p = 60;
        }
        ~Marvellous()           //Destructor
        {
            cout<<"Inside Marvellous Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside sun of Marvellous \n";
        }
};

int main()
{
   Marvellous mobj;

    cout<<sizeof(mobj)<<" bytes \n";   // 20
    mobj.fun();
    mobj.gun();
    mobj.Sun();

    return 0;
}