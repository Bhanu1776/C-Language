#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    pid_t pid,pid1;
    pid=fork();

    if(pid<0){
        fprintf(stderr,"fork failed");
        return 1;
    }
    else if(pid==0){
        fork();
        fork();
        execlp("/bin/ls","ls -l",NULL);
    }
    else{
        printf("parent :child complete");
        wait(NULL);
    }
    return 0;
}