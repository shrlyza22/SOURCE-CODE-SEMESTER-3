#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct elmqueue *address;
struct infotype{
    string nama;
    int usia;
    string pekerjaan;
    bool prioritas;
    int nomorAntrean;
    int waktuDaftar;
} ;

struct Queue{
    address head;
    address tail;
};

struct elmqueue{
    infotype info;
    address next;
};

void createQueue_103032400036(Queue &Q);
bool isEmpty_103032400036(Queue Q);
address allocate_103032400036(string nama,int usia,string pekerjaan,int nomorAntrean, int waktuDaftar);
address front_103032400036(Queue Q);
address back_103032400036(Queue Q);
void enqueue_103032400036(Queue &Q, address p);
void dequeue_103032400036(Queue &Q, address &p);
int size_103032400036(Queue Q);
void printPatient_103032400036(address p);
void serveQueue_103032400036(Queue &Q);
void reassignQueue_103032400036(Queue &Q);
void emergencyHandle_103032400036(Queue &Q, int nomorAntrian);
#endif // QUEUE_H_INCLUDED
