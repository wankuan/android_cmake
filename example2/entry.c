#include "app.h"
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <android/log.h>
uint8_t a = 10;

#define LOG_TAG "communicate"
#define LOGI(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG, __VA_ARGS__)
int main(void)
{
	while(1){
		app();
        #ifdef Windows
            printf("running in windows\n");
        #elif Linux
            LOGI("running in linux222\n");
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