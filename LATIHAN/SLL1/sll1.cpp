#include <iostream>
#include "sll1.h"

using namespace std;

void create(list &L){
    address p;
    p = L.first;
}

address allocate(infotype x){
    address p = new elmlist;
    p->info = x;
    p->next = nullptr;
    return p;
}

bool isempty(list L){
    if(L.first == nullptr && L.first->next == nullptr){
        return true;
    } else {
        return false;
    }
}

void printInfo(list L){
    address p;
    while(p != nullptr){
        cout << p->info;
        cout << ", ";
        p = p->next;
    }
    cout << endl;
}

void insertFirst(list &L, address p){
    p = L.first;
    if (isempty(L)){

    }
}
