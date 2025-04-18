#include <iostream>
using namespace std;

int main() {
    int code;
    cout<<"Code : ";
    cin>>code;

    if (code <= 0) {
        cout<<"Bukan"<<endl;
    } else {
        while (code > 1) {
            if (code % 2 != 0) {
                cout<<"Bukan."<< endl;
            return 0;
            } else code/= 2;
        }
        cout<<"Ya."<< endl;
    }
}