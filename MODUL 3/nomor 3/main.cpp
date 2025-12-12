#include <iostream>

using namespace std;

int main(){
    int a = 22;
    int *b;

    b = &a;
    cout << "Nilai a: " << *b << endl;
    return 0;
}
