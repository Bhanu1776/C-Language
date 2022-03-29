#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
// #include<sys/watt.h>

int main(){
    int pid;
    fork();
    pid = fork();
    fork();
    fork();
    fork();
    printf("Bunny");
    printf("\n Bye \n");
    printf("\n%d\t%d",pid, getppid());
}