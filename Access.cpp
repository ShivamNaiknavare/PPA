#include<iostream>
using namespace std;

class Demo
{

        int i;          //if we do not specify the specifier in C++ then it is considered as private access specifier
    public:
        int j; 
    private:
        int k;
    protected:
        int a;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }       
        void Display()
        {
            cout<<"Value of i : "<<i<<"\n";     
            cout<<"Value of j : "<<j<<"\n";     
            cout<<"Value of k : "<<k<<"\n";     
            cout<<"Value of a : "<<a<<"\n";     
        }     

};

int main()
{   
    Demo obj;

   // cout<<"Value of i : "<<obj.i<<"\n";     //NA beacause it is private bydefault.
    cout<<"Value of j : "<<obj.j<<"\n";     //A    
   // cout<<"Value of k : "<<obj.k<<"\n";     //NA because it is private
   // cout<<"Value of a : "<<obj.a<<"\n";     //NA  because it is protected which can't be access anywhere expect child

    obj.Display();      //Display(&obj) incase of this pointer

    return 0;
}