#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;

    Demo(int a = 10 , int b = 20)   //Parameterised Constructors with Default Arguments
    {
        i = a;
        j = b;

    }
    void Display()
    {
        cout<<"Value of i"<<i<<"\n";
        cout<<"Value of j"<<j<<"\n";
    }   

};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo obj2(12);
    obj2.Display();

    Demo obj3(13,15);
    obj3.Display();

    return 0;
}