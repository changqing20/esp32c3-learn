#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "LED.h"  // component header

void app_main(void)
{
    // initialize LED subsystem
    led_init();

    while (1) {
        led_toggle();
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}
