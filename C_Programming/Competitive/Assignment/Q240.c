#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

# define BUFFER_SIZE 1024

void Display(char FName[],int iSize)
{
    int fd = 0,iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    else
    {
        iRet = read(fd,Buffer,iSize);

        printf("%s",Buffer);
    }
     memset(Buffer,'\0',sizeof(Buffer));

     close(fd);

}
int main()
{
    char FName[30];
    int iValue = 0;

    printf("Enter the file name:");
    scanf("%[^'\n']s",FName);

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(FName, iValue);


    return 0;
}