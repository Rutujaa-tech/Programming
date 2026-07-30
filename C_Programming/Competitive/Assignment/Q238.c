#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

# define BUFFER_SIZE 1024

int WhiteSpaces(char FileName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, iCount = 0, i = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to file open\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))!= 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
    }
    close(fd);
    return iCount;
}

int main()
{
    char FName[30];
    int iRet = 0;

    printf("Enter the File Name:");
    scanf("%[^'\n']s",&FName);

    iRet = WhiteSpaces(FName);
    printf("Number of White space is:%d",iRet);

    return 0;
}