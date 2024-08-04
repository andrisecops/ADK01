#include <Wire.h>
#include <Adafruit_MLX90640.h>

Adafruit_MLX90640 mlx;

void initializeThermalDetection() {
  if (!mlx.begin()) {
    Serial.println("MLX90640 tidak terdeteksi. Periksa koneksi.");
    while (1);
  }
}

void detectThermal() {
  float mlxPixels[32*24];
  if (mlx.getFrame(mlxPixels) != 0) {
    Serial.println("Error membaca data dari sensor panas.");
    return;
  }

  for (int i = 0; i < 32*24; i++) {
    if (mlxPixels[i] > 37.0) {
      Serial.println("Panas tubuh manusia terdeteksi!");
      triggerBombReleaseSystem();  // Panggil fungsi dari BombReleaseSystem
      break;
    }
  }
}
