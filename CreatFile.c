#include<stdio.h>
#include<fcntl.h>               //file control
#include<unistd.h>              //Universal standards

int main()
{
    int fd = 0;                 //fd - File Descriptor

    fd = creat("Marvellous.txt",0777);          //creat is a system call

    if(fd != -1)
    {
        printf("File is successfully created with FD : %d\n",fd);
    }

    return 0;
}