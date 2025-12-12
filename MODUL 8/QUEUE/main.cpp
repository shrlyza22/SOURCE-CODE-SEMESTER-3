#include <iostream>
#include "queue.h"

using namespace std;

int main(){
    Queue Q;
    address p;
    string nama, pekerjaan;
    int usia, nomor;
    int i, jumlah;

    createQueue_103032400036(Q);
    i = 0;

    cout << "masukkan banyak pasien yang ingin di input: ";
    cin >> jumlah;
    cout << endl;

    for(i = 0; i < jumlah; i++){
        cout << "pasien ke- " << (i+1) << endl;
        cout << "nama: ";
        cin >> nama;
        cout << "usia: ";
        cin >> usia;
        cout << "pekerjaan: ";
        cin >> pekerjaan;
        cout << "nomor antrean: ";
        cin >> nomor;
        cout << endl;
        p = allocate_103032400036(nama, usia, pekerjaan, nomor, i);
        enqueue_103032400036(Q,p);
    }

    cout << "banyak pasien dalam antrean: " << size_103032400036(Q) << endl;
    serveQueue_103032400036(Q);
    cout << endl;

    int darurat;
    cout << "\nmasukkan nomor antrean yang ingin di prioritaskan: ";
    cin >> darurat;
    emergencyHandle_103032400036(Q,darurat);
    serveQueue_103032400036(Q);

    reassignQueue_103032400036(Q);
    cout << "\n\ndata prioritas pasien telah di update." << endl;
    serveQueue_103032400036(Q);
    return 0;
}
