#include <iostream>

using namespace std;

int main(){
    int x;

    cin >> x;
    if (x % 3 == 0) {
        cout << x << " adalah kelipatan 3\n";
    } else {
        cout << x << " bukan kelipatan 3\n";
    }
    return 0;
}
