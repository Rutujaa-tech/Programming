#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0; 
    char FileName[30];
    
    printf("Enter the File Name:");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);   

    if(fd == -1)
    {
        printf("Unable to  file open\n");
    }

    else
    {
        printf("file gets successfully opened with fd :%d\n",fd);
    }

    return 0;

}
