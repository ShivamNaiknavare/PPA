#include<stdio.h>

int Call(int i )
{
    for(i = 1; i<=5; i++)
    {
        printf("Jay Mahadev....\n");
    }

    return 0;
}


int main()
{
    int i = 1;
    int Ans = 0;

    Ans = Call(i);
    
    return 0;
}