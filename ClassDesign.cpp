#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int iSize)
        {
            iLength = iSize;
            Arr = new int[iLength];             //creating memory for array
        }     

        ~Array()
        {
            delete []Arr;
        }   

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : "<<"\n";
            for(iCnt = 0; iCnt <iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

         void Display()
        {
            int iCnt = 0;
            cout<<"Elements of the array are : "<<"\n";
            for(iCnt = 0; iCnt <iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }
};

int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}