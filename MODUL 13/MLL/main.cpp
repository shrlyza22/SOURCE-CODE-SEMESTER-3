#include <iostream>
#include "mll.h"

using namespace std;

int main(){
    ListMahasiswa L;
    createListMahasiswa_103032400036(L);

    cout << "[INPUT MAHASISWA]" << endl;

    for (int i = 0; i < 3; i++) {
        string nama, nim;

        cout << "Masukkan nama mahasiswa: ";
        cin >> nama;
        cout << "Masukkan nim mahasiswa: ";
        cin >> nim;
        cout << endl;
        adrMahasiswa p = createElemenMahasiswa_103032400036(nama, nim);
        addMahasiswa_103032400036(L, p);
    }

    cout << "[INPUT MATA KULIAH]" << endl;

    for (int i = 0; i < 4; i++) {
        string namaMK, kodeMK, nim;

        cout << "Masukkan nama mata kuliah: ";
        cin >> namaMK;
        cout << "Masukkan kode mata kuliah: ";
        cin >> kodeMK;
        cout << "Masukkan nim mahasiswa yang ingin di inputkan: ";
        cin >> nim;
        cout << endl;

        adrMahasiswa p = searchMahasiswa_103032400036(L, nim);
        adrMataKuliah q = createElemenMataKuliah_103032400036(namaMK, kodeMK);
        addMataKuliah_103032400036(p, q);
    }

    cout << "[TAMPILAN LIST]" << endl;
    displayList_103032400036(L);

    return 0;
}
