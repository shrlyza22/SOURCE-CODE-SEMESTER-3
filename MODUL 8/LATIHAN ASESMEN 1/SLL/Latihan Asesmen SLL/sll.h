#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct ojol infotype;
typedef struct elmlist *address;
struct ojol{
    string nama;
    float rating;
};
struct elmlist{
    infotype info;
    address next;
};
struct list {
    address first;
};

void createElm(list &L);
address allocate(list &L, infotype x);
bool isEmpty(list &L);
void insertSortedbyRating(list &L, address p);
void deleteByValue(list &L, address &p, string nama);
void showInfo(list &L);
address searchByValue(list &L, string nama);
void updateListOjol(list &L);

#endif // SLL_H_INCLUDED
