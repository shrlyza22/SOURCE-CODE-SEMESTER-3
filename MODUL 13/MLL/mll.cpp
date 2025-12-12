#include <iostream>
#include "mll.h"

using namespace std;

void createListMahasiswa_103032400036(ListMahasiswa &L){
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmptyMahasiswa_103032400036(ListMahasiswa L){
    if (L.first == nullptr && L.last == nullptr){
        return true;
    } else {
        return false;
    }
}

bool isEmptyMataKuliah_103032400036(adrMahasiswa p){
    if (p == nullptr || p->firstMK == nullptr) {
        return true;
    } else {
        return false;
    }
}

adrMahasiswa createElemenMahasiswa_103032400036(string nama, string nim){
    adrMahasiswa p;

    p = new elemenMahasiswa;
    p->info.nama = nama;
    p->info.nim = nim;
    p->next = nullptr;
    p->prev = nullptr;
    p->firstMK = nullptr;

    return p;
}

adrMataKuliah createElemenMataKuliah_103032400036(string nama, string kode){
    adrMataKuliah p;

    p = new elemenMataKuliah;
    p->info.nama = nama;
    p->info.kode = kode;
    p->next = nullptr;
    p->prev = nullptr;

    return p;
}

void addMahasiswa_103032400036(ListMahasiswa &L, adrMahasiswa p){
    if (isEmptyMahasiswa_103032400036(L)){
        L.first = p;
        L.last = p;
    } else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }
}

void addMataKuliah_103032400036(adrMahasiswa &p, adrMataKuliah q){
    if (isEmptyMataKuliah_103032400036(p)){
        p->firstMK = q;
    } else {
        adrMataKuliah r = p->firstMK;
        r->next = q;
        q->prev = r;
    }
}

adrMahasiswa searchMahasiswa_103032400036(ListMahasiswa L, string nim){
    adrMahasiswa p;
    p = L.first;
    while (p!= nullptr){
        if (p->info.nim == nim){
            return p;

        }
        p = p->next;
    }
    return nullptr;
}

void displayList_103032400036(ListMahasiswa L){
   adrMahasiswa p = L.first;
    while (p != nullptr) {
        cout << "mahasiswa: " << p->info.nama << " (" << p->info.nim << ")" << endl;
        cout << "mata kuliah: ";

        adrMataKuliah q = p->firstMK;
        while (q != nullptr) {
            cout << q->info.nama << ", ";
            q = q->next;
        }
        cout << endl;
        cout << endl;
        p = p->next;
    }
}

