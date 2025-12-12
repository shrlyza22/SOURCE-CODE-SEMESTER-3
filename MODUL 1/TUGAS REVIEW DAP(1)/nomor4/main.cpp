#include <iostream>

using namespace std;

int a,b;
void tukar1(int *a,int *b);
void tukar2(int a, int *b);

int main(){
    int a = 10;
    int b = 5;

    cout << "sebelum tukar: " << "a: " << a << " b: " << b << endl;
    tukar1(&b,&a);
    tukar2(a,&b);
    tukar1(&a,&b);
    cout << "sesudah tukar: " << "a: " << a << " b: " << b << endl;
    return 0;
}

void tukar1(int *a,int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void tukar2(int a, int *b){
    int temp;

    temp = a;
    a = *b;
    *b = temp;
}
