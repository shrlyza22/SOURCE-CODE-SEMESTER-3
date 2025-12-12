#include <iostream>
#include "sll.h"

using namespace std;

void createElm(list &L){
    L.first = nullptr;
}

address allocate(list &L, infotype x){
    address p;

    p = new elmlist;
    p->info = x;
    p->next = nullptr;
    return p;
}

bool isEmpty(list &L){
    if (L.first == nullptr) {
        return true;
    } else {
        return false;
    }
}

void insertSortedbyRating(list &L, address p){
    if (isEmpty(L)){
        L.first = p;
    }
    else if (p->info.rating >= L.first->info.rating){
        p->next = L.first;
        L.first = p;
    }
    else {
        address q = L.first;
        while (q->next != nullptr && q->next->info.rating > p->info.rating){
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}

void deleteByValue(list &L, string nama){
    if (isEmpty(L)){
        cout << "List kosong" << endl;
        return;
    }

    address p, q;

    if (L.first->info.nama == nama){
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
        delete p;
    }
    else {
        q = L.first;
        while (q->next != nullptr && q->next->info.nama != nama){
            q = q->next;
        }

        if (q->next != nullptr){
            p = q->next;
            q->next = p->next;
            p->next = nullptr;
            delete p;
        }
        else {
            cout << "Data tidak ditemukan" << endl;
        }
    }
}


void showInfo(list &L){
    address p;
    if (isEmpty(L)){
        cout << "List kosong" << endl;
    } else {
         p = L.first;
        while (p != nullptr){
            cout << "Nama: " << p->info.nama;
            cout << "Rating: " << p->info.rating;
            cout << endl;
            p = p->next;
        }
    }
}

address searchByValue(list &L, string nama){
    address p, hasil;

    hasil = nullptr;
    if (!isEmpty(L)) {
        p = L.first;

        while (p != nullptr) {
            if (p->info.nama == nama) {
                hasil = p;
            }
            p = p->next;
        }
    }

    return hasil;
}

void updateListOjol(list &L, string namaCari){
    if (isEmpty(L)){
        cout << "List kosong" << endl;
    }
    else {
        address p = searchByValue(L, namaCari);

        if (p == nullptr){
            cout << "Data tidak ditemukan" << endl;
        }
        else {
            cout << "Data ditemukan" << endl;
            cout << "Nama lama   : " << p->info.nama << endl;
            cout << "Rating lama : " << p->info.rating << endl;

            cout << "Nama baru   : ";
            cin >> p->info.nama;

            cout << "Rating baru : ";
            cin >> p->info.rating;

             cout << "Data berhasil diupdate" << endl;
        }
    }
}

