#include <iostream>
#include "dll.h"

using namespace std;

int main(){
    list L;
    address p;
    infotype  x;

    createList_103032400036(L);
    cout << "2.2 Input/Output" << endl;
    cout << "masukkan elemen pertama: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertFirst_103032400036(L, p);

    cout << "masukkan elemen kedua di awal: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertFirst_103032400036(L, p);

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L, p);

    cout << "\ndaftar elemen list: ";
    printInfo_103032400036(L);
    cout << endl;
    cout << endl;

    createList_103032400036(L);
    cout << "3.2 Input/Output" << endl;
    cout << "masukkan elemen pertama: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertFirst_103032400036(L,p);
    cout << "masukkan elemen kedua di awal: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);
    cout << "masukkkan elemen ketiga di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);

    deleteFirst_103032400036(L,p);
    cout << "\nelemen pertama telah dihapus" << endl;

    deleteLast_103032400036(L,p);
    cout << "elemen terakhir telah dihapus" << endl;

    cout << "\ndaftar elemen list: ";
    printInfo_103032400036(L);
    cout << endl;
    cout << endl;

    createList_103032400036(L);
    cout << "4.2 Input/Output:" << endl;
    cout << "masukkan elemen di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);
    cout << "masukkan elemen di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);
    cout << "masukkan elemen di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);
    cout << "masukkan elemen di akhir: ";
    cin >> x;
    p = allocate_103032400036(x);
    insertLast_103032400036(L,p);

    cout << "\ndaftar elemen dari depan ke belakang:";
    printInfoFrontToBack_103032400036(L);
    cout << "daftar elemen dari belakang ke depan: ";
    printInfoBackToFront_103032400036(L);
    return 0;
}
