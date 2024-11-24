# Pengukur Intensitas Cahaya LDR dengan Output LCD 16x2

Proyek ini bertujuan untuk mengukur intensitas cahaya menggunakan **Light Dependent Resistor (LDR)** yang terhubung dengan **Arduino Uno**. Hasil pengukuran intensitas cahaya akan ditampilkan dalam bentuk persentase serta kategori pencahayaan (seperti "Gelap", "Redup", "Sedang", "Terang", dan "Sangat Terang") pada **LCD 16x2** yang menggunakan modul I2C.

## Fitur
- Mengukur intensitas cahaya dengan LDR.
- Menampilkan hasil pengukuran dalam bentuk persentase (%).
- Menampilkan kategori cahaya berdasarkan intensitas, seperti:
  - Gelap
  - Redup
  - Sedang
  - Terang
  - Sangat Terang
- Output tampilan menggunakan LCD 16x2 dengan modul I2C.

## Alat dan Bahan
- **Arduino Uno**.
- **LDR (Light Dependent Resistor)**.
- **LCD 16x2** dengan modul **I2C**.
- **Resistor (optional, untuk pembagi tegangan LDR)**.
- **Kabel jumper**.
- **Breadboard**.

## Skematik
Rangkaian ini menghubungkan **LDR** ke pin analog **A0** pada Arduino dan LCD 16x2 dengan koneksi I2C ke pin **SDA** dan **SCL** pada Arduino.

### Koneksi:
1. **LDR**:
   - Salah satu kaki LDR ke pin **A0** (analog input) pada Arduino.
   - Kaki lainnya ke **VCC** dan ground melalui resistor pembagi tegangan jika diperlukan.

2. **LCD 16x2 I2C**:
   - **VCC** ke **5V**.
   - **GND** ke **GND**.
   - **SDA** ke pin **A4** (SDA) pada Arduino Uno.
   - **SCL** ke pin **A5** (SCL) pada Arduino Uno.

## Penjelasan Kode
- **LDR (Light Dependent Resistor)** digunakan untuk mengukur intensitas cahaya. Nilai dari LDR dibaca menggunakan pin analog Arduino.
- Nilai yang dibaca dari LDR diubah menjadi **persentase** menggunakan fungsi `map()`.
- Berdasarkan nilai intensitas, kategori cahaya ditentukan dengan fungsi `getLightCategory()`.
- Hasil pengukuran ditampilkan di layar LCD 16x2 menggunakan modul **I2C**.

