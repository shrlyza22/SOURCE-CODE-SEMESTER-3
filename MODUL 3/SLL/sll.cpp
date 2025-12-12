#include <iostream>
#include "sll.h"

using namespace std;

void create_list(list &L){
    L.first = nullptr;
}

adr new_elemen(infotype x){
    adr elm;

    elm = new elmList;
    elm->info = x
    elm->next = nullptr;
    return P
}

void insertAscending(list &L, infotype x){
    adr elm, P, Prec;
    elm = new_elemen(x);

    if (L.first == nullptr) {
        L.first = elm;
    } else if (x < L.first->info){
       elm->next = L.first
    } else {
        P = L.first;
        Prec = nullptr;
        while (P != nullptr) && (P->info < x){
            Prec = P;
            P = P->next;
        }
        elm->next = P;
        Prec->next = elm;
    }
}

void print_info()
