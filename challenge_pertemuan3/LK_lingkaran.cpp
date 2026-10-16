#include <iostream>
using namespace std;

int main() {
    float r, luas, keliling;
    const float PI = 3.14159;

    cout << "=== PROGRAM LINGKARAN ===" << endl;
    cout << "Masukkan jari-jari (r) : ";
    cin >> r;

    // Menghitung luas dan keliling
    luas = PI * r * r;
    keliling = 2 * PI * r;

    // Menampilkan hasil
    cout << "\n--- HASIL ---" << endl;
    cout << "Luas Lingkaran     : " << luas << endl;
    cout << "Keliling Lingkaran : " << keliling << endl;

    return 0;
}