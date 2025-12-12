#include "list.h"

using namespace std;

int main(){
    List L;
    address p;
    int masukan;

    masukan = 0;
    createList_103032400036(L);

    cout << "Masukkan angka pertama: ";
    cin >> masukan;
    p = allocate_103032400036(masukan);
    insertFirst_103032400036(L,p);
    printInfo_103032400036(L);

    cout << "Masukkan angka kedua: ";
    cin >> masukan;
    p = allocate_103032400036(masukan);
    insertFirst_103032400036(L,p);
    printInfo_103032400036(L);

    cout << "Masukkan angka ketiga: ";
    cin >> masukan;
    p = allocate_103032400036(masukan);
    insertFirst_103032400036(L,p);
    printInfo_103032400036(L);

    return 0;
}
