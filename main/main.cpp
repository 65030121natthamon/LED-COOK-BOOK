#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "LED.h"

extern "C" void app_main(void);

void app_main(void)
{
    LED led1(5); 
    LED led2(17);
    LED led3(18);  
    
    while(1)
    {        
        led1.ON();
        led2.OFF();
        led3.OFF();
        printf("LED 1 is ON\n");
        vTaskDelay(500 / portTICK_PERIOD_MS);

        led1.OFF();
        led2.ON();
        led3.OFF();
        printf("LED 2 is ON\n");
        vTaskDelay(500 / portTICK_PERIOD_MS);

        led1.OFF();
        led2.OFF();
        led3.ON();
        printf("LED 3 is ON\n");
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}