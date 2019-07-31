/*
* @author Evan Reeves
*/

#include "stm32f4xx_hal.h"

typedef struct {
  uint16_t hours;
  uint16_t minutes;
  uint16_t seconds;
}time;

void GPIO_Init(void);
void inc_seconds(void);
void inc_minutes(void);
void inc_hours(void);
void set_seconds(uint8_t);
void set_minutes(uint8_t);
void set_hours(uint8_t);
GPIO_PinState gpio_state(uint8_t);
void brightness_control(void);
void update_display(void);
void HAL_IncTick(void);
void main_loop(void);
static void SystemClock_Config(void);
void ConfigureADC(void);
void EXTI_Init(void);
uint8_t int2bcd(uint8_t);
