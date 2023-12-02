#include<iostream>
using namespace std;
//Solution with friend
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
    friend void Display();          //Declaration of friend function               
};

void Display()              //Naked function --> function which is outside of class
{
    Demo obj;
    cout<<"Value of i "<<obj.i<<"\n";
    cout<<"Value of j "<<obj.j<<"\n";   
    cout<<"Value of k "<<obj.k<<"\n";
}

int main()
{
    Display();

    return 0;
}