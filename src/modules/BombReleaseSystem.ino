#include <Servo.h>

#define BOM_RELEASE_PIN 10
Servo bomRelease;

void initializeBombReleaseSystem() {
  bomRelease.attach(BOM_RELEASE_PIN);
  bomRelease.write(0);
}

void triggerBombReleaseSystem() {
  bomRelease.write(90); // Lepaskan bom
  delay(1000);
  bomRelease.write(0);
}
