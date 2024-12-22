 #include<stdio.h>
#include<signal.h>
#include<unistd.h>
int main()
{
   pid_t pid=fork();
   if (pid==0){
     printf("Child process ID:%d\n",getpid());
     printf("Parent process suspended\n");
   }
   else
   {
     sleep(10);
     printf("Parent process resumed\n");
   }
   return 0;
}
