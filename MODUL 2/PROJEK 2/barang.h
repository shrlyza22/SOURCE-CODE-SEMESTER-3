#ifndef BARANG_H_INCLUDED
#define BARANG_H_INCLUDED

#define Nil NULL

#include <string>
using namespace std;

struct barang{
    string nama;
    int stok;
    int harga;
};

typedef barang infotype;

struct elmlist;
typedef struct elmlist *adr;

struct elmlist{
    infotype info;
    adr next;
};

struct list {
    adr first;
};

void Create_List(list &L);
adr New_Elemen(infotype data);
void Insert_First(list &L, adr P);
void Insert_Last(list &L, adr P);
void Insert_After(list &L, adr prec, adr P);
void Delete_First(list &L, adr &P);
void Delete_Last(list &L, adr P);
void Delete_After(list &L, adr prec, adr &P);
void Show(list L);

#endif // BARANG_H_INCLUDED
