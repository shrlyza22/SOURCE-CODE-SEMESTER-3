#include <iostream>

using namespace std;

int main(){
    float x, jumlah, rata_rata, total;

    jumlah = 0;
    total = 0;

    cin >> x;
    while (x != -999) {
        jumlah += 1;
        total += x;
        cin >> x;
    }
    rata_rata = total /  jumlah;
    cout << "Output:\n";
    if (jumlah == 0) {
        cout << jumlah << endl;
    } else {
        cout << rata_rata << endl;
    }
    return 0;
}
