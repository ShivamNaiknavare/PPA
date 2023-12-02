#include<stdio.h>

int main()
{
    int Arr[4] ={10,20,30,40};

    printf("Base address of array is : %d\n",Arr);

    printf("Base address of first element of array is : %d\n",&(Arr[0]));

    printf("Base Address of second element of array is : %d\n",&(Arr[1]));    

    printf("First element is : %d\n",Arr[0]);           //10

    printf("Size of whole array is : %d bytes\n",sizeof(Arr));        //16

    printf("Size of second elemnet of array : %d\n",sizeof(Arr[1]));    //4
    
    
    
    return 0;
}