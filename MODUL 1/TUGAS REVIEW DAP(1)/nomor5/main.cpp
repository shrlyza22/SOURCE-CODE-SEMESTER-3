#include <iostream>

using namespace std;

const int nMax = 51;
struct mahasiswa {
    string nim;
    string nama;
    int nilai;
};
mahasiswa tabMahasiswa[nMax];

int nilaiPertama(mahasiswa tabMahasiswa[], int n, string nim){
    for (int i = 0;  i < n; i++){
        if (tabMahasiswa[i].nim == nim) {
            return i;
        }

    }
    return -1;

}

int main(){
    int idx,n;
    string nim;
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "NIM: ";
        cin >> tabMahasiswa[i].nim;
        cout << "Nama: ";
        cin >> tabMahasiswa[i].nama;
        cout << "Nilai: ";
        cin >> tabMahasiswa[i].nilai;
        cout << endl;
    }
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nim;

    idx = nilaiPertama(tabMahasiswa, n, nim);
    if (idx == -1) {
        cout << "\nTidak ditemukan\n";
    } else {
        cout << "\nDitemukan..." << endl;
        cout << "NIM: " << tabMahasiswa[idx].nim << endl;
        cout << "Nama: " << tabMahasiswa[idx].nama << endl;
        cout << "Nilai pertama: " << tabMahasiswa[idx].nilai << endl;
    }
    return 0;
}
