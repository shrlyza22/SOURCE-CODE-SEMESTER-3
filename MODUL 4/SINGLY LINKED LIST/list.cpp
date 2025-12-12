#include <iostream>
#include "list.h"

using namespace std;

void createList_103032400036(List &L){
    L.first = nullptr;
}

address allocate_103032400036(infotype x){
    address p = new elmlist;
    p->info = x;
    p->next = nullptr;

    return p;
}

void insertFirst_103032400036(List &L, address p){
    p->next = L.first;
    L.first = p;
}

void printInfo_103032400036(List L){
    address p = L.first;

    while(p){
        cout << p->info << ", ";
        p = p->next;
    }

    cout << endl;
}
