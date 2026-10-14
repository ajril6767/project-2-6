#include <iostream>
using namespace std;

int main() {
    string menu[2] = {"Soto","Rawon"};
    int harga[2] = {10000, 20000};
    int porsi[2];
    int total[2];

    for(int i = 0; i < 2; i++) {
        cout << "=================================" << endl;
        cout << "Menu   : " << menu[i] << endl;
        cout << "Harga  : " << harga[i] << endl;
        cout << "Porsi  : ";
        cin >> porsi[i];

        total[i] = porsi[i] * harga[i];

        cout << "Total  : " << total[i] << endl;
        cout << "=================================" << endl;
    }

    return 0;
}
