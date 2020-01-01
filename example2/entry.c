#include "app.h"
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
uint8_t a = 10;
int main(void)
{
	while(1){
		app();
        #ifdef Windows
            printf("running in windows\n");
        #elif Linux
            printf("running in linux\n");
        #else
            printf("running in unkonwn\n");
        #endif

        #ifdef DEBUG2
		    sleep(1);
        #else
            sleep(2);
        #endif
	}

}