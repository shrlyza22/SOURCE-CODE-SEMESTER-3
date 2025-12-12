#ifndef SLL2_H_INCLUDED
#define SLL2_H_INCLUDED

typedef int infotype;
typedef struct elmlist *adr;

struct elmlist {
    infotype info;
    adr next;
};

struct list {
    adr first;
};

void searchElement_103032400036(list &L, infotype x);
void selectionSort_103032400036(list &L);
void insertSorted_103032400036(list &L, adr p);

#endif // SLL2_H_INCLUDED
