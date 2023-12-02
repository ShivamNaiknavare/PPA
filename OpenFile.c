#include<stdio.h>
#include<fcntl.h>               //file control
#include<unistd.h>              //Universal standards

int main()
{
    int fd = 0;                 //fd - File Descriptor

    fd = open("Marvellous.txt",O_RDWR);          //open is a system call

    if(fd != -1)
    {
        printf("File is successfully opened with FD : %d\n",fd);
    }

    close(fd);                  //to close the open file

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR  : Read + Write