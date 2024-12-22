#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void sig_handler(int signo) 
{
    if(signo == SIGQUIT)
        printf("Received SIGQUIT\n");
}
int main() 
{
    if (signal(SIGQUIT, sig_handler) == SIG_ERR) 
    {
        printf("Can't catch SIGQUIT\n");
        return 1;
    }
    while(1)
        sleep(1);
    return 0;
}
