#include<stdio.h>

int Addition(int No1 , int No2)
{
    int Sum = 0;
    Sum = No1 + No2; 
    return Sum;
}

int Substarction(int No1 , int No2)
{
    int Sum = 0;
    Sum = No1 - No2;
    return Sum;
}

int Multiplication(int Fno , int Sno)
{
    int Mul = 0;
    Mul = Fno * Sno;
    return Mul;
}

int main()
{
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

    Ans = Addition(Value1,Value2);
    printf("Addition is : %d\n",Ans);

    Ans = Substarction(Value1,Value2);
    printf("Substraction is : %d\n",Ans);

    Ans = Multiplication(Value1,Value2);
    printf("Multiplication is : %d\n",Ans);

    return 0;
}
