#include <iostream>

using namespace std;

int main() {
    string bina;
    int desimal = 0;

    cout << "Input kode biner: ";
    cin >> bina;

    for (char digit : bina) {
        if (digit != '0' && digit != '1') {
            cout << "Pesan Rusak!" << endl;
            return 0;
        }
    }

    for (char digit : bina) {
        desimal = desimal * 2 + (digit - '0');
    }

    cout << "Angka desimal dari biner " << bina << " adalah " << desimal << "." << endl;

    return 0;
}
