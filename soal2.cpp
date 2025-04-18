#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string biner;
    int i, pjg, desimal;
    
    cout<<"Input Bilangan Biner : ";
    getline(cin, biner);

    pjg = biner.size();
    desimal = 0;

    for (i = 0; i <pjg;i++)
        if (biner[i] != '0')
        desimal += pow(2,pjg-i-1);

        cout << "angka desimal dari biner " << biner << " adalah : " << desimal << endl;
}