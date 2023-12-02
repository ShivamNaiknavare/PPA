#include<iostream>
using namespace std ;

class Base
{
    public:
        int i,j,k;

        void fun()          //Concrete Method - Method with the body        1000
        {
            cout<<"Base fun\n";
        }   

        virtual void gun()    //Concrete Method - Method with the body      2000
        {
            cout<<"Base gun\n";
        }
        virtual int Addition(int no1 , int no2) = 0;       //abstract method - Method without the body      ----
};

class Derived : public Base
{
    public :
        int a,b;
        void gun()  //Concrete Method   use of virtual keyword is optional      3000
        {
            cout<<"derived gun\n";
        }
        virtual void sun()      //Concrete Method                               4000
        {
            cout<<"Inside derived sun\n";
        }
        int Addition(int no1 , int no2)     //Concrete Method                   5000
        {
            return no1 + no2;
        }
};

int main()
{
    Base bobj;

    Base *bp = new Derived;

    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}