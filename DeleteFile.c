#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{   
    unlink("Marvellous.txt");           //To delete file successfully

    printf("File Deleted Successfully...\n");

    return 0;
}