#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
    int res,n;
    res=open("fifo1",O_WRONLY);
    write(res,"message",7);
    printf("sender process having pid %d sent the data\n",getpid());
    return 0;
}
