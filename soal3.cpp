#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    string nama;
    int nim, alpro, prostat, os, rata;
    float siap;

    cout<<"Nama Mahasiswa : ";
    getline(cin, nama);

    cout<<"Nim Mahasiswa : ";
    cin>>nim;

    cout<<"Nilai Mata Kuliah"<<endl;
    cout<<"Algoritma Dan Pemograman : ";
    cin>>alpro;

    cout<<"Probabilitas Dan Statitika : ";
    cin>>prostat;

    cout<<"Sitem Operasi : ";
    cin>>os;

    if (alpro >=60) {
        cout <<"Algoritma Dan Pemograman : Lulus"<<endl;
    } else {
        cout<<"Algoritma Dan Pemograman : Tidak Lulus. Silahkan ulangi tahun depan"<<endl;
    }

    if (prostat >=60) {
        cout<<"Probabilitas Dan Statitika : Lulus"<<endl;
    } else {
        cout<<"Probabilitas Dan Statitika : Tidak Lulus. Silahkan Ulangi tahun depan"<<endl;
    }

    if (os >=60) {
        cout<<"Sitem Operasi : Lulus"<<endl;
    } else {
        cout<<"Sitem Operasi : Tidak lulus. silahkan ulangin tahun depan"<<endl;
    }
    
    rata = alpro + prostat + os;
    siap = (float)rata / 3;

    cout<<"Nilai Rata - Rata semester ini : "<<siap<<endl;

}