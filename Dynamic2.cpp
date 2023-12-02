#include<stdlib.h>
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j,k;
    Demo()
    {
        cout<<"Inside Demo Constructor\n";
    }

    ~Demo()
    {
        cout<<"Inside Demo Destructor\n";
    }
    void Display()
    {
        cout<<"Inside Display\n";
    }
};

int main()
{
    Demo obj1;          //Static obj creation
    obj1.Display();

    //Demo *ptr = (Demo *)malloc(sizeof(Demo));
    Demo *ptr = new Demo ;      //Object Creation Dynamically

    ptr->Display();     //To access contain using ptr we have to use -> direct accessing operator

    delete ptr;
    //free(ptr);

    return 0;
}