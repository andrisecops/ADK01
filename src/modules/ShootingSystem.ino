#include <Servo.h>

#define SHOOTER_PIN 9
Servo shooter;

void initializeShootingSystem() {
  shooter.attach(SHOOTER_PIN);
  shooter.write(0);
}

void triggerShootingSystem() {
  shooter.write(90); // Tembak
  delay(1000);
  shooter.write(0);
}
