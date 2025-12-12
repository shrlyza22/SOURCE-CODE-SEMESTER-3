#include <iostream>
#include "queue.h"

using namespace std;

void createQueue_103032400036(Queue &Q){
    Q.head = nullptr;
    Q.tail = nullptr;
}

bool isEmpty_103032400036(Queue Q){
    if (Q.head == nullptr && Q.tail == nullptr){
        return true;
    } else {
        return false;
    }
}

address allocate_103032400036(string nama, int usia, string pekerjaan, int nomorAntrean, int waktuDaftar){
    address p;
    infotype x;

    p = new elmqueue;
    x.nama = nama;
    x.usia = usia;
    x.pekerjaan = pekerjaan;
    x.prioritas = usia >= 60 || pekerjaan == "tenaga_kesehatan";
    x.nomorAntrean = nomorAntrean;
    x.waktuDaftar = waktuDaftar;

    p->info = x;
    p->next = nullptr;
    return p;
}

address front_103032400036(Queue Q){
    return Q.head;
}

address back_103032400036(Queue Q){
    return Q.tail;
}

void enqueue_103032400036(Queue &Q, address p){
    address temp;
    bool inputPatientPrioritas;
    bool semuaPasienPrioritas;
    bool tidakAdaPasienPrioritas;

    if(!isEmpty_103032400036(Q)){
        inputPatientPrioritas = !p->info.prioritas;
        semuaPasienPrioritas = Q.tail->info.prioritas;
        tidakAdaPasienPrioritas = !Q.head->info.prioritas;
    }
    if (isEmpty_103032400036(Q)){
        Q.head = p;
        Q.tail = p;
    } else if (inputPatientPrioritas || semuaPasienPrioritas) {
        Q.tail->next = p;
        Q.tail = p;
    } else if (tidakAdaPasienPrioritas){
        p->next = Q.head;
        Q.head = p;
    } else {
        temp = Q.head;
    while (temp->next != nullptr && temp->next->info.prioritas) {
        temp = temp->next;
    }
    p->next = temp->next;
    temp->next = p;
    }
}

void dequeue_103032400036(Queue &Q, address &p){
    if (!isEmpty_103032400036(Q)){
        p = Q.head;
        Q.head = p->next;

        if (Q.head == nullptr){
            Q.tail = nullptr;
        }
    } else {
        p = nullptr;
    }
}

int size_103032400036(Queue Q){
    int count;
    address p;

    count = 0;
    p = Q.head;

    while (p!=nullptr){
        count++;
        p = p->next;
    }
    return count;
}

void printPatient_103032400036(address p){
    if (p != nullptr){
        cout << "\n------------------------------" << endl;
        cout << "nama: " << p->info.nama << endl;
        cout << "usia: " << p->info.usia << endl;
        cout << "pekerjaan: " << p->info.pekerjaan << endl;
        cout << "prioritas: " << p->info.prioritas << endl;
        cout << "nomor antrean: " << p->info.nomorAntrean << endl;
    }
}

void serveQueue_103032400036(Queue &Q){
    address p;
    int jumPasien = 5;
    while (!isEmpty_103032400036(Q)&& jumPasien > 0){
        dequeue_103032400036(Q,p);
        printPatient_103032400036(p);
        cout << "Vaksinasi berhasil.";

        p->next = nullptr;
        jumPasien--;
    }
}

void reassignQueue_103032400036(Queue &Q){
    address P;

    P = Q.head;
    while (P != nullptr){
        if (P->info.prioritas == false){
            P->info.prioritas = true;
        }
        P = P->next;
    }
}

void emergencyHandle_103032400036(Queue &Q, int nomorAntrean){
    address P;
    address Prev;

    P  = Q.head;
    Prev = nullptr;

    while (P != nullptr && P->info.nomorAntrean != nomorAntrean){
        Prev = P;
        P = P->next;
    }
    if (P != nullptr){
        P->info.prioritas = true;
        if (P != Q.head){
            Prev->next = P->next;
            if (P == Q.tail){
                Q.tail = Prev;
            }
            P->next = Q.head;
            Q.head = P;
        }
    }
}

