#include <iostream>
#include "kerucut.h"

using namespace std;

int main(){
    float r, t, s;

    cout << "Jari - jari: ";
    cin >> r;
    cout << "Tinggi: ";
    cin >> t;
    cout << "Panjang Selimut: ";
    cin >> s;
    cout << endl;
    float volume = volumeKerucut_103032400036(r,t);
    float luas = luasPermukaan_103032400036(r,s);

    cout << "Volume Kerucut: " << volume << endl;
    cout << "Luas Permukaan: " << luas << endl;
    return 0;
}
