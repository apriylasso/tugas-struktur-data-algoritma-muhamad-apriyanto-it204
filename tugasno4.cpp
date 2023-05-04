#include <iostream>
using namespace std;

int main() {
    int lari, pushup, plank;
    
    cout << "Masukkan waktu olahraga lari (dalam menit): ";
    cin >> lari;
    cout << "Masukkan waktu olahraga push-up (dalam menit): ";
    cin >> pushup;
    cout << "Masukkan waktu olahraga plank (dalam menit): ";
    cin >> plank;

    int kalori_lari = (lari / 5) * 60;
    int kalori_pushup = (pushup / 30) * 200;
    int kalori_plank = plank * 5;

    int total_kalori = kalori_lari + kalori_pushup + kalori_plank;

    cout << "Jumlah kalori yang terbakar: " << total_kalori << " kalori" << endl;

    return 0;
}
