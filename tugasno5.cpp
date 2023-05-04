#include <iostream>

using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur anak (dalam tahun): ";
    cin >> umur;

    if (umur < 1) {
        cout << "Dilarang masuk" << endl;
    } else {
        int tinggi;
        cout << "Masukkan tinggi anak (dalam cm): ";
        cin >> tinggi;
        if (umur < 3) {
            int tarif = 30000;
            if (tinggi > 70) {
                tarif += 10000;
            }
            cout << "Tarif: Rp " << tarif << endl;
        } else if (umur < 7) {
            int tarif = 40000;
            if (tinggi > 120) {
                tarif += 15000;
            }
            cout << "Tarif: Rp " << tarif << endl;
        } else if (umur < 10) {
            int tarif = 50000;
            if (tinggi > 150) {
                tarif += 20000;
            }
            cout << "Tarif: Rp " << tarif << endl;
        } else {
            cout << "Tarif: Rp 80000" << endl;
        }
    }

    return 0;
}
