#include <iostream>
#include "barang.h"

using namespace std;

int main() {
    list L;
    Create_List(L);

    int pilihan = 0;  // kasih nilai awal biar gak random
    adr P, del, prec;
    infotype barangBaru;

    while (pilihan != 8) {
        cout << "\n====== MENU LIST BARANG ======" << endl;
        cout << "1. Tambah Barang Pertama" << endl;
        cout << "2. Tambah Barang Terakhir" << endl;
        cout << "3. Tambah Barang Setelah Elemen" << endl;
        cout << "4. Hapus Barang Pertama " << endl;
        cout << "5. Hapus Barang Terakhir " << endl;
        cout << "6. Hapus Barang Setelah Elemen " << endl;
        cout << "7. Tampilkan Semua Barang" << endl;
        cout << "8. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan Nama Barang (1 kata): ";
            cin >> barangBaru.nama;
            cout << "Masukkan Stok: ";
            cin >> barangBaru.stok;
            cout << "Masukkan Harga: ";
            cin >> barangBaru.harga;

            P = New_Elemen(barangBaru);
            Insert_First(L, P);
            cout << "Barang berhasil ditambahkan di depan." << endl;

        } else if (pilihan == 2) {
            cout << "Masukkan Nama Barang (1 kata): ";
            cin >> barangBaru.nama;
            cout << "Masukkan Stok: ";
            cin >> barangBaru.stok;
            cout << "Masukkan Harga: ";
            cin >> barangBaru.harga;

            P = New_Elemen(barangBaru);
            Insert_Last(L, P);
            cout << "Barang berhasil ditambahkan di akhir." << endl;

        } else if (pilihan == 3) {
            if (L.first == Nil) {
                cout << "List kosong, tidak bisa Insert After!" << endl;
            } else {
                cout << "Masukkan Nama Barang (1 kata): ";
                cin >> barangBaru.nama;
                cout << "Masukkan Stok: ";
                cin >> barangBaru.stok;
                cout << "Masukkan Harga: ";
                cin >> barangBaru.harga;

                P = New_Elemen(barangBaru);
                prec = L.first; // contoh: selalu setelah elemen pertama
                Insert_After(L, prec, P);
                cout << "Barang berhasil ditambahkan setelah barang pertama." << endl;
            }

        } else if (pilihan == 4) {
            Delete_First(L, del);
            if (del != Nil) {
                cout << "Barang " << del->info.nama << " dihapus dari depan." << endl;
            } else {
                cout << "List kosong, tidak bisa hapus." << endl;
            }

        } else if (pilihan == 5) {
            Delete_Last(L, del);
            if (del != Nil) {
                cout << "Barang " << del->info.nama << " dihapus dari belakang." << endl;
            } else {
                cout << "List kosong, tidak bisa hapus." << endl;
            }

        } else if (pilihan == 6) {
            if (L.first == Nil || L.first->next == Nil) {
                cout << "List terlalu sedikit, tidak bisa Delete After!" << endl;
            } else {
                prec = L.first; // contoh: hapus setelah elemen pertama
                Delete_After(L, prec, del);
                if (del != Nil) {
                    cout << "Barang " << del->info.nama << " dihapus (setelah elemen pertama)." << endl;
                }
            }

        } else if (pilihan == 7) {
            cout << "\n== Daftar Barang ==" << endl;
            Show(L);

        } else if (pilihan < 1 || pilihan > 8) {
            cout << "Pilihan Invalid" << endl;
        }
    }

    cout << "Program selesai." << endl;
    return 0;
}
