#include<iostream>
using namespace std;

class Demo      //Class Definition
{
    public:     //Access specifier
        int i;      //Characteristic
        int j;      //Characteristic

        Demo()          //Default Constructor
        {
            cout<<"Inside Default Constructor\n";
            i = 0;
            j = 0;
        }
        Demo(int A, int B)      //Parameterised Constructor
        {
            cout<<"Inside Parameterised Constructore\n";
            i = A;
            j = B;

        }

        //Demo &ref = obj2;
        Demo(Demo &ref)         //Copy Constructor
        {
            cout<<"Inside Copy Constructor\n";
            i = ref.i;
            j = ref.j;

        }

        ~Demo()         //Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void Fff()
        {
            cout<<"Method,,,,\n";
        }

};

int main()
{   
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    obj1.Fff();
    obj2.Fff();

    return 0;
}