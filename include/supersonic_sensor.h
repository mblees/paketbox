#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include <stdint.h>
#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_DISTANCE 300

#define us_trig_pin 22
#define us_echo_pin 36

float read_us();
void init_us();

#ifdef __cplusplus
}
#endif

#endif // ULTRASONIC_SENSOR_H