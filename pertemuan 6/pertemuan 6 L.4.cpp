#include <stdio.h>

int main() {
    // Inisialisasi variabel
    double kecepatan = 2.0;  // Kecepatan sepeda dalam meter/detik
    int waktu = 100;        // Waktu dalam detik

    // Menghitung jarak yang ditempuh
    double jarak = kecepatan * waktu;

    // Menampilkan hasil
    printf("Jarak yang ditempuh setelah %d detik adalah %.2f meter.\n", waktu, jarak);

    return 0;
}
