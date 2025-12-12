#include <iostream>
#include "sll2.h"

using namespace std;

void searchElement_103032400036(list &L, infotype x){
    adr current;
    int position;

    current = L.first;
    position = 1;
    while (current != nullptr && current->info != x){
        position += 1;
        current = current->next;
    }
    if (current != nullptr){
        cout << "Elemen terdapat pada posisi ke- " << position
             << ", dengan nilai: " << current->info <<  endl;
    } else {
        cout << "Elemen tersebut tidak ada dalam list" << endl;
    }
}

void selectionSort_103032400036(list &L){
    adr p, min, temp;
    infotype x;

    p = L.first;
    while (p != nullptr){
        min = p;
        temp = p;
        while (temp != nullptr){
            if (temp->info < min->info){
                min = temp;
            }
            temp = temp->next;
        }
        x = p->info;
        p->info = min->info;
        min->info = x;
        p = p->next;
    }
}

void insertSorted_103032400036(list &L, adr p){
    adr q, prev;
    bool found;

    q = L.first;
    found = false;
    prev = nullptr;
    while (q != nullptr && found == false) {
        if (q->info < p->info) {
            prev = q;
            q = q->next;
        } else {
            found = true;
        }
    }
    if (prev == nullptr){
        p->next = L.first;
        L.first = p;
    } else {
        p->next = q;
        prev->next = p;
    }
}
