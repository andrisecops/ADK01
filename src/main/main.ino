#include "MotionDetection.h"
#include "ThermalDetection.h"
#include "ShootingSystem.h"
#include "BombReleaseSystem.h"

void setup() {
  Serial.begin(9600);
  initializeMotionDetection();
  initializeThermalDetection();
  initializeShootingSystem();
  initializeBombReleaseSystem();
  Serial.println("Setup selesai.");
}

void loop() {
  detectMotion();
  detectThermal();
  delay(1000);  // Delay untuk mengurangi beban pemrosesan
}
