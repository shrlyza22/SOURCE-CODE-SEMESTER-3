#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_103032400036(List &L);
address allocate_103032400036(infotype x);
void insertFirst_103032400036(List &L, address p);
void printInfo_103032400036(List L);


#endif // LIST_H_INCLUDED
