#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, luas, keliling;

    cout << "=== PROGRAM PERSEGI PANJANG ===" << endl;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar   : ";
    cin >> lebar;

    // Menghitung luas dan keliling
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    // Menampilkan hasil
    cout << "\n--- HASIL ---" << endl;
    cout << "Luas Persegi Panjang     : " << luas << endl;
    cout << "Keliling Persegi Panjang : " << keliling << endl;

    return 0;
}