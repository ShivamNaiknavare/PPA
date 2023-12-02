#include<stdio.h>
#include<fcntl.h>               //file control
#include<unistd.h>              //Universal standards
#include<string.h>

int main()
{
    int fd = 0;                 //fd - File Descriptor
    char Arr[20];               //empty array
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);          //open is a system call

    Ret = read(fd,Arr,10);         //  (kashatun vachaych, kashat vachaych, kiti vachaych)

    printf("%d bytes gets read from the file\n",Ret);
    printf("Data is : %s\n",Arr);           

    close(fd);                  //to close the open file

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR  : Read + Write