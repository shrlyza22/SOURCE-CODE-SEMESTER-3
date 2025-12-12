#include <iostream>
#include "barang.h"

using namespace std;

void Create_List(list &L){
    L.first = Nil;
}

adr New_Elemen(infotype data){
    adr P = new elmlist;
    P->info = data;
    P->next = Nil;
    return P;
}

void Insert_First(list &L, adr P) {
    P->next = L.first;
    L.first = P;
}

void Insert_Last(list &L, adr P){
    adr Q;
    if (L.first == Nil){
        L.first = P;
    } else {
       Q = L.first;
        while (Q->next != Nil) {
        Q = Q->next;
    }
    Q->next = P;
    }
}

void Insert_After(list &L, adr prec, adr P) {
    if (prec != Nil) {
        P->next = prec->next;
        prec->next = P;
    }
}

void Delete_First(list &L, adr &P){
    if (L.first != Nil) {
        P = L.first;
        L.first = P->next;
        P->next = Nil;
    } else {
        P = Nil;
    }
}

void Delete_Last(list &L, adr P){
    adr Q;
    if (L.first == Nil) {
        P = Nil;
    } else if (L.first->next == Nil){
        P = L.first;
        L.first = Nil;
    } else {
        Q = Nil;
        P = L.first;
    }
    while (P->next != Nil){
        Q = P;
        P = P->next;
    }
    Q->next = Nil;
}

void Delete_After(list &L, adr prec, adr &P){

    if (prec != Nil && prec->next != Nil){
        P = prec->next;
        prec->next = P->next;
        P->next = Nil;
    } else {
        P = Nil;
    }
}

void Show(list L){
    adr P;

    if (L.first == Nil) {
        cout  << "List Kosong\n";
    } else {
        P = L.first;
        while (P != Nil){
            cout << "Nama: " << (P->info).nama << endl;
            cout << "Stok: " << (P->info).stok << endl;
            cout << "Harga: " << (P->info).harga << endl;
        P = P->next;
        }
    }
}

