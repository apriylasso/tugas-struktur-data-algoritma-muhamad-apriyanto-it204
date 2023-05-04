#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, tempat_tinggal, pangkat;
    int umur;
    double tabungan;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan Umur: ";
    cin >> umur;

    cout << "Masukkan Tempat Tinggal: ";
    cin.ignore();
    getline(cin, tempat_tinggal);

    cout << "Masukkan Jumlah Tabungan dalam dollar: ";
    cin >> tabungan;

    // Menganalisa ciri-ciri
    if (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && tabungan > 10000000) {
        pangkat = "Don";
    } else if (umur >= 25 && umur <= 40 && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        pangkat = "Underboss";
    } else if (umur >= 18 && umur <= 24 && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && tabungan < 1000000) {
        pangkat = "Capo";
    } else {
        cout << nama << " tidak mencurigakan.\n";
        return 0;
    }

    // Output
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << ".\n";

    return 0;
}
