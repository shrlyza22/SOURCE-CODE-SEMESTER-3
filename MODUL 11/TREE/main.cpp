#include <iostream>
#include "tree.h"

using namespace std;

int main(){
    adrNode p, root;
    infotype x;
    createTree_103032400036(root);

    for (int i = 0; i < 7; i++){
        cout << "Masukkan node: ";
        cin >> x;
        p = createNode_103032400036(x);
        insertNode_103032400036(root,p);
    }
    cout << endl;

    int cari;
    cout << "Masukkan nilai dari node yang ingin dicari: ";
    cin >> cari;

    adrNode hasil = searchNode_103032400036(root,cari);
    if (hasil != nullptr) {
        cout << "Node dengan nilai " << hasil->info << " ditemukan!" << endl;
    }
    cout << endl;

    cout << "Print BST (inorder traversal): ";
    displayTree_103032400036(root);
    cout << endl;

    cout << "Jumlah node: " << countNodes_103032400036(root) << endl;
    cout << "Nilai terkecil: " << getMinValue_103032400036(root) << endl;
    cout << "Nilai terbesar: " << getMaxValue_103032400036(root) << endl;
    return 0;
}
