#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void sig_handler(int signo) 
{
    if(signo == SIGINT)
        printf("Received SIGINT\n");
}
int main() 
{
    if (signal(SIGINT, sig_handler) == SIG_ERR) 
    {
        printf("Can't catch SIGINT\n");
        return 1;
    }
    while(1)
        sleep(1);
    return 0;
}
