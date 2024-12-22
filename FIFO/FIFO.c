#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <sys/stat.h>
int main()
{
  int res;
  res=mkfifo("Fifo1",0777);
  printf("Named pipe created\n");
  return 0;
}
