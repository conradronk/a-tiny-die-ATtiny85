#include <Arduino.h>
#include <AccelStepper.h>

#define step_pin 0
#define dir_pin 1

AccelStepper DisplayHand(AccelStepper::DRIVER, step_pin, dir_pin);

void setup() {
  DisplayHand.setAcceleration(20);
  DisplayHand.setMaxSpeed(40);
}

void loop() {
  DisplayHand.run();
}