#include <iostream>
#include "sll.h"

using namespace std;

int main(){
    adr P;
    float input;

    create_list(L);

    cin >> input;
    P = new_elemen(input);
    insertAscending(L,input);

    return 0;
}
