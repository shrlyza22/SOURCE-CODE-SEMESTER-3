#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

typedef infotype = float;
typedef adr = *elmList;
struct elmList{
    infotype info;
    adr next;
};

struct list {
    adr first;
};

list L;

void create_list(list &L);
void new_elemen(infotype x);
void insertAscending(list &L, infotype x);
#endif // SLL_H_INCLUDED
