#define TRIGGER_PIN 7
#define ECHO_PIN 6

void initializeMotionDetection() {
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void detectMotion() {
  long duration, distance;
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration / 2) / 29.1;

  if (distance < 100) {
    Serial.println("Gerakan terdeteksi!");
    triggerShootingSystem();  // Panggil fungsi dari ShootingSystem
  }
}
