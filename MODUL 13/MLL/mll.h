#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iostream>

using namespace std;

struct elemenMahasiswa;
struct elemenMahasiswa;

typedef struct elemenMahasiswa *adrMahasiswa;
typedef struct elemenMataKuliah *adrMataKuliah;

struct Mahasiswa {
    string nama;
    string nim;
};

struct MataKuliah{
    string nama;
    string kode;
};

struct elemenMahasiswa{
    Mahasiswa info;
    adrMahasiswa next;
    adrMahasiswa prev;
    adrMataKuliah firstMK;
};

struct elemenMataKuliah{
    MataKuliah info;
    adrMataKuliah next;
    adrMataKuliah prev;
};

struct ListMahasiswa;

struct ListMahasiswa{
    adrMahasiswa first;
    adrMahasiswa last;
};

void createListMahasiswa_103032400036(ListMahasiswa &L);
bool isEmptyMahasiswa_103032400036(ListMahasiswa L);
bool isEmptyMataKuliah_103032400036(adrMahasiswa p);
adrMahasiswa createElemenMahasiswa_103032400036(string nama, string nim);
adrMataKuliah createElemenMataKuliah_103032400036(string nama, string kode);
void addMahasiswa_103032400036(ListMahasiswa &L, adrMahasiswa p);
void addMataKuliah_103032400036(adrMahasiswa &p, adrMataKuliah q);
adrMahasiswa searchMahasiswa_103032400036(ListMahasiswa L, string nim);
void displayList_103032400036(ListMahasiswa L);



#endif // MLL_H_INCLUDED
