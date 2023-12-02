#include<stdio.h>


void Display()
{
    register int no = 11;        //register int i = 11;
    register int i;              //register int i;
   
    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);

}

int main()
{
    Display();

//    printf("%d\n",no);
    return 0;
}