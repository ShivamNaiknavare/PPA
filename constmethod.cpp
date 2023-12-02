#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j ;
        int k ;

        //Parameteries Constructor
        Demo(int a, int b, int c)     
        {
            i = a;
            j = b;    
            k = c;    
        }
        void fun()
        {
            i++;
            j++;
            k++;
        }
        void gun(int x, const int y) const
        {
            int no1 = 10;
            const int no2 = 20;

            x++;    //A
          //  y++;    //NA
            no1++;  //A
          //  no2++;  //NA

          //  i++;    //NA
          //  j++;    //NA
          //  k++;    //NA
        }       
};

int main()
{
    Demo obj(11,21,51);
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";

    obj.fun();
    obj.gun(51,101);

    const Demo obj2(11,21,51);      //Constant object creation
   // obj2.fun();                   //error because constant object cant call non constant methods
    obj2.gun(51,101);

    return 0;
}