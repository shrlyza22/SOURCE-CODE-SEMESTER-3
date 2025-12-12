#include <iostream>
#include "stack.h"

using namespace std;

void createStack_103032400036(stack &S){
    S.top = 0;
}

bool isEmpty_103032400036(stack S){
    if (S.top == 0){
        return true;
    } else {
        return false;
    }
}

bool isFull_103032400036(stack S){
    if (S.top == MAXSTACK){
        return true;
    } else {
        return false;
    }
}

void push_103032400036(stack &S, infotype x){
    if (!isFull_103032400036(S)){
        S.info[S.top] = x;
        S.top++;
    }
}

infotype pop_103032400036(stack &S){
    infotype x;

    S.top--;
    x = S.info[S.top];
    return x;
}

int sumStack_103032400036(stack S){
    int total;

    total = 0;
    while (!isEmpty_103032400036(S)){
        total += pop_103032400036(S);
    }
    return total;
}
