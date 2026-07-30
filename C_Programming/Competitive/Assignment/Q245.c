#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
    char FileName[30];
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the File Name:");
    scanf("%s", FileName);

    printf("Enter the String:");
    scanf(" %[^\n]", Buffer);

    fd = open(FileName, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = write(fd, Buffer, strlen(Buffer));

    if(iRet == -1)
    {
        printf("Unable to write data\n");
        return -1;
    }

    printf("Data written successfully\n");

    close(fd);

    return 0;
}