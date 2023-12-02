#include<stdio.h>

void Fun()
{
    static int i = 10;
    i++;
    printf("Value of i is : %d\n",i);
}

int main()
{
    Fun();      //11
    Fun();      //12
    Fun();      //13

    return 0;
}