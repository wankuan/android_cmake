#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>
#include <unistd.h>

uint8_t global = 0;
int main(void)
{
    uint8_t local = 0;
    pid_t pid;
    pid = fork();
    if(pid<0){
        printf("error in fork!\n");
    }
    else if(pid == 0)
    {
        local = 3;
        global = 4;
        printf("Child process is alive\n");
        printf("Child process: local:%d ,global:%d\n",local,global);
        printf("Child process,ID-%d, my father ID-%d, my child ID-%d\n",getpid(),getppid(),pid);
        sleep(2);
        printf("Child process: local:%d ,global:%d\n",local,global);
        printf("Child process,ID-%d, my father ID-%d, my child ID-%d\n",getpid(),getppid(),pid);
        printf("Child process is dead\n");
    }
    else
    {
        local = 1;
        global = 2;
        printf("Father process is alive\n");
        printf("Father process local:%d ,global:%d\n",local,global);
        printf("Father process,ID-%d, my father ID-%d, my child ID-%d\n",getpid(),getppid(),pid);
        sleep(1);
        local = 22;
        global = 11;
        printf("Father process is dead\n");
        printf("Father process local:%d ,global:%d\n",local,global);
    }
    return 0;
}