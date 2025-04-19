#include <iostream>
using namespace std;

int main() {
    string biner;
    int i, pjg, desimal;
    
    cout << "Input Bilangan Biner : ";
    getline(cin, biner);

    pjg = biner.size();
    desimal = 0;

    for (i = 0; i < pjg; i++)
        if (biner[i] != '0')
            desimal += (1 << (pjg - i - 1));

    cout << "Angka desimal dari biner " << biner << " adalah : " << desimal << endl;
}
