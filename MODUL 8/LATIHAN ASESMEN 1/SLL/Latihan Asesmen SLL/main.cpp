#include <iostream>
#include "sll.h"

using namespace std;

int main(){
    list L;
    infotype x;
    address p;

    createElm(L);
    for (int i = 0; i < 5; i++){
        cout << "No: " << (i+1);
        cout << "Nama Ojol: ";
        cin >> p->info.nama;
        cout << "Rating: ";
        cin >> p->info.rating;
        cout << endl;
        p = allocate(L,x);
        insertSortedbyRating(L,p);
    }
    p = p->next;
    showInfo(L);

    string namaCari;
    cout << "\nNama ojol yang ingin dicari: ";
    cin >> namaCari;

    p = searchByValue(L, namaCari);
    if (p != nullptr) {
        cout << "Ditemukan → "
             << p->info.nama << " | Rating: " << p->info.rating << endl;
    } else {
        cout << "Tidak ditemukan." << endl;
    }

    string namaUpdate;
    cout << "\nNama ojol yang ingin diupdate: ";
    cin >> namaUpdate;

    updateListOjol(L, namaUpdate);

    cout << "\n=== LIST SETELAH UPDATE ===\n";
    showInfo(L);

    string namaDelete;
    cout << "\nNama ojol yang ingin dihapus: ";
    cin >> namaDelete;

    deleteByValue(L, namaDelete);

    cout << "\n=== LIST SETELAH DELETE ===\n";
    showInfo(L);

    return 0;
}
