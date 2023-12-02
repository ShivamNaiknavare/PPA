#include<stdio.h>

int main()
{
    int * ptr = NULL;
    
    printf("Value is %d",*ptr);  //Null is Internally defined as #define NULL (void *)0 
                                 //So void means nothing it will not show any o/p
    return 0;
}

