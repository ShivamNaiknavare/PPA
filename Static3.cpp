#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    static int k;

    Demo(int a = 10, int b = 20)
    {
        i = a;
        j = b;
    }

    void Display()
    {
        cout<<"Inside Non Static Method Display\n";
        cout<<"Value of i"<<i<<"\n";
        cout<<"Value of j"<<j<<"\n";
        cout<<"Value of k"<<k<<"\n";
    }

    static void Fun()       //Static Behaviour Creation
    {
        cout<<"Inside Static Method Fun \n";
        cout<<"Value of K"<<k;  
    }
};
int Demo::k = 111;

int main()
{
    cout<<"Value of K is "<<Demo::k<<"\n";
    Demo::Fun();            // Static Method Calling

    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);

    cout<<"Size of object is : "<<sizeof(obj1)<<"\n";
    
    obj1.Display();
    obj2.Display();
    obj3.Display();

    return 0;
}