#include<stdio.h>

int main()
{
    int no = 11;    //Normal Variable

    int *p = &no;   //Pointer 

    printf("%d\n",no);                   //11
    printf("%d\n",&no);                 //it will be randomly store
    printf("%d\n",sizeof(no));          //4bytes
    printf("%d\n",p);                   // it will store address of no
    printf("%d\n",&p);                  //it will be randomly store
    printf("%d\n",*p);                  //11
    printf("%d\n",sizeof(p));           //8bytes(depends on os 32bitor64bit)


    return 0;
}