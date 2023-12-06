#include "supersonic_sensor.h"

uint8_t read_us(){
  unsigned long duration = 0;
  unsigned int distance = 0;

  digitalWrite(us_trig_pin, LOW);
  delayMicroseconds(2);

  digitalWrite(us_trig_pin, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(us_echo_pin, HIGH);
  distance = duration/58;

  if (distance > MAX_DISTANCE || distance <= 0){
    Serial.println("Out of sensor range!");
    return -1;
  } else {
    Serial.println(distance);
    return distance;
  }
}