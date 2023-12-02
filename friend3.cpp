#include<iostream>
using namespace std;
//Member function of class Can be a friend
class Hello 
{   
    public:
    void Display();                     //declaration of method 
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }     
    friend void Hello::Display();          //Declaration of friend function  for the member function of class             
};

void Hello::Display()                       //Definition of method outside class which is allowed
{
    Demo obj;
    cout<<"Value of i "<<obj.i<<"\n";
    cout<<"Value of j "<<obj.j<<"\n";   
     cout<<"Value of k "<<obj.k<<"\n";
}

int main()
{
    Hello hobj;

    hobj.Display();

    return 0;
}