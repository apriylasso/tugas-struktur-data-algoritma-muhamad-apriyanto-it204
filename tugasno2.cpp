#include <iostream>
#include <string>

using namespace std;

int main() {
    int coding_score;
    string interview_score;

    cout << "Masukkan nilai coding: ";
    cin >> coding_score;

    cout << "Masukkan nilai interview (A/B): ";
    cin >> interview_score;

    // Tes Coding
    string coding_result;
    if (coding_score >= 80) {
        coding_result = "LOLOS";
    } else if (coding_score >= 60) {
        coding_result = "DIPERTIMBANGKAN";
    } else {
        coding_result = "GAGAL";
    }

    // Tes Interview
    string interview_result;
    if (interview_score == "A" || interview_score == "B") {
        interview_result = "LOLOS";
    } else {
        interview_result = "GAGAL";
    }

    // Menampilkan Hasil Tes Keseluruhan
    if (coding_result == "LOLOS" && interview_result == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}
