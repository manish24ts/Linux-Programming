#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
  int res,n;
  char buffer[100];
  res=open("fifo1",O_RDONLY);
  n=read(res,buffer,100);
  printf("reader process having pid %d started\n",getpid());
  printf("data received by receiver %d is %s\n",getpid(),buffer);
  return 0;
}
