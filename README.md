# Proyek Autonomous Drone Killer

Proyek ini bertujuan untuk membuat drone otonom dengan fitur-fitur canggih untuk keamanan dan sistem defensif negara. Berikut adalah langkah-langkah untuk menggunakan proyek ini:

## Fitur

1. **Deteksi Manusia yang Bergerak**
2. **Mode Malam dan Deteksi Panas Tubuh**
3. **Penembakan Otomatis**
4. **Pelepasan Bom**

## Persiapan Hardware

- Arduino Uno atau Mega
- Modul kamera (misalnya, OpenMV Cam atau modul kamera lain yang mendukung deteksi objek)
- Sensor inframerah dan sensor panas (misalnya, MLX90640)
- Motor dan propeller untuk drone
- Modul GPS
- Modul komunikasi (misalnya, RF module atau Wi-Fi module)
- Mekanisme penembakan (misalnya, servo motor yang dihubungkan ke peluru atau pelontar)
- Mekanisme pelepasan bom (misalnya, servo motor yang dihubungkan ke pengait bom)
- Baterai dan komponen kelistrikan lainnya

## Langkah-langkah Penggunaan

1. **Persiapan Hardware:**
   - Pasang semua komponen sesuai dengan diagram rangkaian yang dibuat.
   - Pastikan semua kabel dan koneksi terpasang dengan baik.

2. **Mengunggah Kode:**
   - Sambungkan Arduino ke komputer menggunakan kabel USB.
   - Buka Arduino IDE.
   - Buka file `main.ino` dan pastikan semua file modul berada dalam folder yang sama.
   - Pilih jenis papan Arduino dan port yang sesuai dari menu Tools.
   - Klik tombol `Upload` untuk mengunggah kode ke papan Arduino.

3. **Pengujian:**
   - Nyalakan drone dan pastikan semua sistem berjalan dengan baik.
   - Uji setiap fitur satu per satu untuk memastikan semuanya berfungsi seperti yang diharapkan.

4. **Operasional:**
   - Drone akan mulai mendeteksi pergerakan dan panas tubuh manusia secara otomatis.
   - Ketika ancaman terdeteksi, drone akan menembak atau melepaskan bom sesuai dengan skenario yang telah diprogram.


