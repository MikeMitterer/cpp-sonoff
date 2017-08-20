#include <Arduino.h>

//                               GPIO   NodeMCU
static const uint8_t IOPIN_BTN   = 0;   //   3;
static const uint8_t IOPIN_RELAY = 12;  //   6;
static const uint8_t IOPIN_LED   = 13;  //   7;
static const uint8_t IOPIN_EXTRA = 14;  //   5;

// the setup function runs once when you press reset or power the board
void setup() {

    Serial.begin(115200);
    Serial.println("Booting...");

    delay(10);

    pinMode(IOPIN_LED, OUTPUT);

    Serial.println("Done!");
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(IOPIN_LED, HIGH);
    delay(100);
    digitalWrite(IOPIN_LED, LOW);
    delay(100);

    yield();
}

