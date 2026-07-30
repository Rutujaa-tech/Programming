#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;   
    char FileName[30];
    
    printf("Enter the File Name:");
    scanf("%s",FileName);          

    fd = creat(FileName,0777);  

    if(fd == -1)
    {
        printf("Unable to crate file\n");
    }

    else
    {
        printf("file gets successfully created with fd :%d\n",fd);
    }

    return 0;

}
