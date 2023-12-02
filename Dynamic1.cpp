#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5];                 // Static Memory allocation

    int *ptr1 = (int *)malloc(5 * sizeof(int));      //Dynamic memory allocation in C

    int *ptr = new int[5];                      //Dynamic memory allocation in c++

    free(ptr1);                 // Dynamic Memory deallocation in C

    delete []ptr;              //Dynamic Memory deallocation in C++
 
    return 0;
}