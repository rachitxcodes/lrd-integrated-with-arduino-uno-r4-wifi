#include <Arduino.h>
#define ldrPin A0 // LDR connected to analog pin A0
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);

}

void loop() {
// write your code here
    int ldrValue = analogRead(ldrPin);
    int lightPercent = map(ldrValue, 0, 1023, 100, 0); // Map the LDR value to a percentage (0-100)
    Serial.println(ldrValue);
    Serial.println(lightPercent);
    delay(300); // Delay for 300 milliseconds before the next reading
}