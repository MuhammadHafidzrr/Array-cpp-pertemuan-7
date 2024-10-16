#include <iostream>
using namespace std;

int main() {

    cout << "Nama  : Muhammad Hafidz Rizqi Rukmana" << endl;
    cout << "Kelas : 1B Informatika" << endl;
    cout << "NPM   : 2410631170037" << endl;
    cout << "Tugas Pertemuan 7" << endl;

    const int ukuran = 10;
    int arr[ukuran];
    int nilaiTertinggi = INT_MIN;


    cout << "\n\nMasukkan " << ukuran << " angka" << endl;
    for (int i = 0; i < ukuran; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> arr[i];

        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << nilaiTertinggi << endl;

    int mencariAngka;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> mencariAngka;

    bool ditemukan = false;
    for (int i = 0; i < ukuran; i++) {
        if (arr[i] == mencariAngka) {
            cout << "Angka " << mencariAngka << " ditemukan pada indeks: " << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << mencariAngka << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
