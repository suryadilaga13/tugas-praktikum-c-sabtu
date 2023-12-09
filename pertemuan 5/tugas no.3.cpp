#include <iostream>
using namespace std;

int main() {
    int jamMasuk, menitMasuk, jamKeluar, menitKeluar;
    int biaya = 2000; 
    int totalWaktu;

    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Masukkan menit masuk: ";
    cin >> menitMasuk;

    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;
    cout << "Masukkan menit keluar: ";
    cin >> menitKeluar;

    
    totalWaktu = (jamKeluar - jamMasuk) * 60 + (menitKeluar - menitMasuk);

    
    if (totalWaktu <= 120) {
        
        cout << "Biaya parkir: " << biaya << " Rupiah" << endl;
    } else {
        
        totalWaktu -= 120; 
        biaya += (totalWaktu / 60) * 500; 
        cout << "Biaya parkir: " << biaya << " Rupiah" << endl;
    }

    return 0;
}
