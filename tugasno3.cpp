#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string positions = "";

    cout << "Masukkan nomor punggung: ";
    cin >> number;

    if (number % 2 == 0 && number >= 2 && number < 50) {
        positions += "Target Attacker, ";
    }
    if (number % 2 == 0 && number >= 50 && number <= 100) {
        positions += "Berhak dipilih menjadi Kapten Team, ";
    }
    if (number % 2 != 0 && number >= 1 && number < 90) {
        positions += "Defender, ";
    }
    if (number % 2 != 0 && number > 90 && number <= 99) {
        positions += "Playmaker, ";
    }
    if (number % 15 == 0 || number % 3 == 0 || number % 5 == 0) {
        positions += "Keeper, ";
    }

    if (positions.empty()) {
        cout << "Nomor punggung tidak dikenali" << endl;
    } else {
        cout << "Posisi: " << positions.substr(0, positions.length() - 2) << endl;
    }

    return 0;
}
