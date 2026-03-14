#ifndef BSP_LED_H
#define BSP_LED_H

#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize LED hardware (GPIO8 with external pull-up).
 *
 * This configures the pin as a push-pull output and sets it to the
 * inactive level (high). Must be called before any other LED functions.
 */
void led_init(void);

/**
 * @brief Set LED state.
 *
 * @param on true to turn the LED on (drive the line low), false to turn it off
 *           (release the line so the pull-up pulls it high).
 */
void led_set(bool on);

/**
 * @brief Toggle the LED state.
 */
void led_toggle(void);

#ifdef __cplusplus
}
#endif

#endif // BSP_LED_H
