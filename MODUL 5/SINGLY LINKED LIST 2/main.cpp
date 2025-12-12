#include <iostream>
#include "sll2.h"
using namespace std;

int main(){
    list L;
    adr p;
    int x, n;

    createList_103032400036(L);

    cout << "Jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> x;
        p = newElement_103032400036(x);
        insertLast_103032400036(L,p);
    }

    cout << "List awal: ";
    print_103032400036(L);

    cout << "\nHasil pencarian elemen 3:\n";
    searchElement_103032400036(L, 3);

    selectionSort_103032400036(L);
    cout << "List setelah diurutkan: ";
    print_103032400036(L);

    cout << "\nMenyisipkan elemen 3 secara terurut...\n";
    insertSorted_103032400036(L,p);
    cout << "List setelah insertSorted: ";
    print_103032400036(L);

    return 0;
}
