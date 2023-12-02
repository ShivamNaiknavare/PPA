#include<iostream>
using namespace std;

// Naked Function
float Calculate(float Marks , float Outof = 100)    //Default Argument i.e float Outof = 100
{
    float Percentage = (Marks / Outof) * 100;
    return Percentage;
}
int main()
{
    float Ans = 0.0f;

    Ans = Calculate(86,100);
    cout<<"Float Percentage : "<<Ans<<"\n";

    Ans = Calculate(86);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(324,400);
    cout<<"Percentage : "<<Ans<<"\n";

    return 0;
}