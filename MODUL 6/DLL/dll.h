#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

typedef int infotype;
typedef struct elmList *address;
struct elmList{
    infotype info;
    address next;
    address prev;
};
struct list {
    address first;
    address last;
};

void createList_103032400036(list &L);
bool isEmpty_103032400036(list L);
address allocate_103032400036(infotype x);
void printInfo_103032400036(list L);
void insertFirst_103032400036(list &L, address p);
void insertLast_103032400036(list &L, address p);
void deleteFirst_103032400036(list &L, address &p);
void deleteLast_103032400036(list &L, address &p);
void printInfoFrontToBack_103032400036(list L);
void printInfoBackToFront_103032400036(list L);
#endif // DLL_H_INCLUDED
