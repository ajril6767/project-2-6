#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, totalHarga = 0;

    cout << "==================================" << endl;
    cout << "       MENU TIKET BUS MALANG      " << endl;
    cout << "==================================" << endl;
    cout << "1. Malang - Surabaya (Rp 35.000)" << endl;
    cout << "2. Malang - Pasuruan (Rp 20.000)" << endl;
    cout << "3. Malang - Jombang  (Rp 25.000)" << endl;
    cout << "Pilih rute (1-3): ";
    cin >> pilihan;

    cout << "Masukkan jumlah penumpang: ";
    cin >> jumlah;

    switch (pilihan) {
        case 1:
            totalHarga = 35000 * jumlah;
            cout << "\nRute Tujuan : Malang - Surabaya" << endl;
            break;
        case 2:
            totalHarga = 20000 * jumlah;
            cout << "\nRute Tujuan : Malang - Pasuruan" << endl;
            break;
        case 3:
            totalHarga = 25000 * jumlah;
            cout << "\nRute Tujuan : Malang - Jombang" << endl;
            break;
        default:
            cout << "\nPilihan rute tidak valid!" << endl;
            return 0;
    }

    cout << "Jumlah Penumpang : " << jumlah << " orang" << endl;
    cout << "Total Harga      : Rp " << totalHarga << endl;
    cout << "==================================" << endl;

    return 0;
}
