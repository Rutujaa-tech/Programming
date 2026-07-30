#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountCapital(char Fname[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, iCount = 0, i = 0;

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))!= 0)
    {
        for(i = 0; i <= iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }
    return iCount;

    close(fd);

}

int main()
{
    char FileName [30];
    int iRet = 0;

    printf("Enter the file name:");
    scanf("%[^'\n']s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital character are %d",iRet);

    return 0;
}
