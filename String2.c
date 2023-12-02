#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);


    return 0;
}