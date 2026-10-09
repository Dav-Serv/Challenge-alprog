#include <iostream>
using namespace std;

int main(){
    int a, b;
    int luas = 0;

    cout << "===== Kalkulator Penghitung Luas Persegi Panjang =====\n";
    cout << "Panjang: ";
    cin >> a;
    cout << "Lebar: ";
    cin >> b;
    cout << endl;

    luas = a * b;

    cout << "Luas Persegi Panjang: " << a << " x " << b << " = " << luas;
}