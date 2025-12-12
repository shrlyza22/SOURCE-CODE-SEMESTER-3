#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    stack S;
    infotype x;
    int i;

    cout << "Nama : Sheren Aulia Azahra" << endl;
    cout << "NIM  : 103032400036" << endl;
    cout << "Kelas: IT-48-05" << endl;
    cout << endl;

    createStack_103032400036(S);
    i = 0;
    while (!isFull_103032400036(S)){
        cout << "input angka ke-" << (i+1) << ": ";
        cin >> x;
        push_103032400036(S,x);
        i++;
    }
    cout << "stack sudah penuh!" << endl;

    cout << endl;
    cout << "hasil penjumlahan elemen dalam stack: "
        << sumStack_103032400036(S) << endl;
    return 0;
}
