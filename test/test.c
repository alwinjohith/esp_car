#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

// Motor pins
#define IN1 26
#define IN2 27
#define IN3 14
#define IN4 12

void motor_init(void)
{
    gpio_set_direction(IN1, GPIO_MODE_OUTPUT);
    gpio_set_direction(IN2, GPIO_MODE_OUTPUT);
    gpio_set_direction(IN3, GPIO_MODE_OUTPUT);
    gpio_set_direction(IN4, GPIO_MODE_OUTPUT);
}

void stop(void)
{
    gpio_set_level(IN1, 0);
    gpio_set_level(IN2, 0);
    gpio_set_level(IN3, 0);
    gpio_set_level(IN4, 0);
}

void forward(void)
{
    gpio_set_level(IN1, 1);
    gpio_set_level(IN2, 0);
    gpio_set_level(IN3, 1);
    gpio_set_level(IN4, 0);
}

void backward(void)
{
    gpio_set_level(IN1, 0);
    gpio_set_level(IN2, 1);
    gpio_set_level(IN3, 0);
    gpio_set_level(IN4, 1);
}

void app_main(void)
{
    motor_init();

    while (1) {
        forward();   // move forward
        vTaskDelay(3000 / portTICK_PERIOD_MS);

        stop();
        vTaskDelay(2000 / portTICK_PERIOD_MS);

        backward();  // move backward
        vTaskDelay(3000 / portTICK_PERIOD_MS);

        stop();
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
