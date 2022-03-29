#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t pid,pid1;
pid=fork();
if(pid<0)
{
fprintf(stderr,"fork failed");
return 1;
}
else if(pid==0)
{
fork();
fork();
//pid1=getpid();
//printf("hi\n");
//printf("child :pid=%d\n",pid);
//printf("child pid1 =%d\n",pid1);
//printf("parent pid =%d\n",getppid());
execlp("/bin/ls","ls -l",NULL);
}
else
{

printf("parent :child complete");
//fork();
wait(NULL);
}
//fork();
//fork();
return 0;
}
