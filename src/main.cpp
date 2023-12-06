#include <Arduino.h>

#include "reed_sensor.h"
#include "supersonic_sensor.h"

void setup() {
    Serial.begin(9600);

    init_reed();
    init_us();
}

void loop() {
    Serial.print(read_reed());
    Serial.print(",");

    float us_value = read_us();

    if(us_value == -1){
        Serial.println("Out of Range");
    }
    else{
        Serial.println(us_value);
    }
    delay(50);
}
