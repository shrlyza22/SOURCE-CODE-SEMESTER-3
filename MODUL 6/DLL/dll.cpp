#include <iostream>
#include "dll.h"

using namespace std;

void createList_103032400036(list &L){
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmpty_103032400036(list L){
    if (L.first == nullptr && L.last == nullptr){
        return true;
    } else {
        return false;
    }
}

address allocate_103032400036(infotype x){
    address p = new elmList;
    p->info = x;
    p->next = nullptr;
    p->prev = nullptr;
    return p;
}

void printInfo_103032400036(list L){
    address p;
    p = L.first;
    if (isEmpty_103032400036(L)) {
        cout << "List Empty";
    } else {
        while (p != nullptr) {
            cout << p->info;
            if (p->next != nullptr)
                cout << ", ";
            p = p->next;
        }
    }

    cout << endl;
}

void insertFirst_103032400036(list &L, address p){
    if (isEmpty_103032400036(L)){
        L.first = p;
        L.last = p;
    } else {
        p->prev = nullptr;
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}

void insertLast_103032400036(list &L, address p){
    if (isEmpty_103032400036(L)){
        L.first = p;
        L.last = p;
    } else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
        L.last->next = nullptr;
    }
}

void deleteFirst_103032400036(list &L, address &p){
    if (isEmpty_103032400036(L)){
        p = nullptr;
    } else if (L.first == L.last) {
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        p = L.first;
        L.first = L.first->next;
        L.first->prev = nullptr;
        p->next = nullptr;
    }
}

void deleteLast_103032400036(list &L, address &p){
    if (isEmpty_103032400036(L)){
        p = nullptr;
    } else if (L.first == L.last){
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        p = L.last;
        L.last = L.last->prev;
        L.last->next = nullptr;
        p->prev = nullptr;
    }
}

void printInfoFrontToBack_103032400036(list L){
    address p;
    p = L.first;
    while (p!= nullptr){
        cout << p->info;
        if (p->next != nullptr){
            cout << ", ";
        }
        p = p->next;
        }
        cout << endl;

}

void printInfoBackToFront_103032400036(list L){
    address p;
    p = L.last;
    while (p != nullptr){
        cout << p->info;
        if (p->prev != nullptr){
            cout << ", ";
        }
        p = p->prev;
    }
    cout << endl;
}

