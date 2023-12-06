#include <Arduino.h>

#include "reed_sensor.h"
#include "supersonic_sensor.h"

void setup() {
    Serial.begin(115200);

    init_reed();
    init_us();
}

void loop() {
    Serial.print(read_reed());
    Serial.print(",");
    Serial.println(read_us());
    delay(300); // min delay 200ms because of ultrasonic sensor
}
