#include<iostream>
using namespace std;

int main()
{
    enum days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

    cout<<Sunday<<"\n";
    cout<<Monday<<"\n";

    enum months{Jan = 10, Feb = 20, March, April = 30};

    cout<<Jan<<"\n";    //10
    cout<<Feb<<"\n";    //20
    cout<<March<<"\n";  //21
    cout<<April<<"\n";  //30

    return 0;
}