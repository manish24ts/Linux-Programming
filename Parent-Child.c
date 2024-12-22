#include <stdio.h>
#include <unistd.h>
int main()
{
  int ret;
  ret=fork();
  if(ret>0)
  {
    printf("\n Parent");
    printf("\n My pid is %d",getpid());
  }
  if (ret==0)
  {
    printf("\n Child");
    printf("\n My pid id %d",getpid());
    printf("\n My parent id is %d",getpid());
  }
    return 0;
}
