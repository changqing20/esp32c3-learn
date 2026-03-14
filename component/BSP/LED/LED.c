#include "led.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_GPIO GPIO_NUM_8

static bool s_led_state = false;

void led_init(void)
{
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);
    // externally pulled up: idle high
    gpio_set_level(LED_GPIO, 1);
    s_led_state = false;
}

void led_set(bool on)
{
    s_led_state = on;
    gpio_set_level(LED_GPIO, on ? 0 : 1);
}

void led_toggle(void)
{
    led_set(!s_led_state);
}

