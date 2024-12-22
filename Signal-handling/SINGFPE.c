#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
static void sig_fpe(int signo);
int main()
{
    int pid;
    if (signal(SIGFPE, sig_fpe) == SIG_ERR)
       printf("Signal Error\n");
    pid=10;
    int d=0;
    pid=pid/d;
    exit(0);
    return 0;
}
static void sig_fpe(int signo)
{
    if(signo==SIGFPE)
       printf("SIGFPE signal catch\n");
    exit(0);
} 
