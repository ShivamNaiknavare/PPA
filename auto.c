#include<stdio.h>


void Display()
{
    int no = 11;        //auto int i = 11;
    int i;              //auto int i;
    auto int j = 21;
    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);

}

int main()
{
    Display();

//    printf("%d\n",no);
    return 0;
}