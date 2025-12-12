#ifndef SLL1_H_INCLUDED
#define SLL1_H_INCLUDED

typedef int infotype;
typedef struct elmlist *address;
struct elmlist{
    infotype info;
    address next;
};
struct list{
    adr first;
};

void create(list &L);
address allocate(infotype x);
bool isempty(list L);
void printInfo(list L);
void insertFirst(list &L, address p);
void insertLast(list &L, address p);
void insertAfter(list &L, address p);
void deleteFirst(list &L, address p);
void deleteLast(list &L, address &p);
void deleteAfter(list &L, address &p);
#endif // SLL1_H_INCLUDED
