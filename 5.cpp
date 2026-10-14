#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "=== CEK BILANGAN GENAP / GANJIL ===" << endl;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Jika habis dibagi 2, maka genap; jika tidak, ganjil
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
