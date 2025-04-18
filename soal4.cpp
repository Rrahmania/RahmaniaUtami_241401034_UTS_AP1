#include <iostream>
using namespace std;

int main(){
    int i, jumlah = 0;
    char kata[9999];

    cout << "Masukan Mantra: ";
    cin.getline(kata, 9999);

    for (i = 0; kata[i] != '\0'; i++) { //- Perulangan akan berjalan dari indeks pertama (i = 0) 
        //hingga menemukan karakter null ('\0'), yang menandai akhir string.

        if (kata[i]=='a' || kata[i]=='i' || kata[i]=='u' || kata[i]=='e' || kata[i]=='o' || 
            kata[i]=='A' || kata[i]=='I' || kata[i]=='U' || kata[i]=='E' || kata[i]=='O') {
            jumlah++;
        }
    }

    if (jumlah > 0) {
        cout << "Jumlah Huruf Vokal: " << jumlah << endl;
    } else {
        cout << "Mantra Tidak Valid. Tidak mengandung huruf vokal" << endl;
    }

    return 0;
}