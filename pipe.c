#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
  int fd[2],n;
  char buffer[100];
  pid_t p;
  pipe(fd);
  p=fork();
  if(p>0)
{
    printf("Passing value to child\n");
    write(fd[1],"Hello Students\n",15);
  }
  else{
    printf("Child received data\n");
    n=read(fd[0],buffer,100);
    write(1,buffer,n);
  }
  return 0;
}