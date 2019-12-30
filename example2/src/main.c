#include <stdio.h>
#include <unistd.h>
int main()
{
    while(1){
        sleep(1);
        printf("hello world first NDK service!\n");
        printf("running!!\n");
    }
    return 0;
}