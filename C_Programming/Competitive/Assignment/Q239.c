#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

# define BUFFER_SIZE 1024

int CountChar(char FName[], char ch)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0,iCount = 0, i = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to file open\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))!= 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ch)
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
    char FileName [30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the FileName:");
    scanf("%[^'\n']s",FileName);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of characterr is:%d",iRet);
    return 0;
}