#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary School Portal\n");

    printf("Enter your Division : \n");
    scanf("%d",&Standard);

    if(Standard == 1)
    {
        printf("Your Exam is at 1PM\n");
    }
    else if(Standard == 2)
    {
        printf("Your Exam is at 2PM\n");
    }
    else if(Standard == 3)
    {
        printf("Your Exam is at 3PM\n");
    }
    else if(Standard == 4)
    {
        printf("Your Exam is at 4PM\n");
    }
    else
    {
        printf("Invalid standard\n");
    }
    return 0;
}