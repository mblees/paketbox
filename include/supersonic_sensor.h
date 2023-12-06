#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include <stdint.h>
#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_DISTANCE 300

#define us_trig_pin 2
#define us_echo_pin A1

#ifdef __cplusplus
}
#endif

#endif // ULTRASONIC_SENSOR_H