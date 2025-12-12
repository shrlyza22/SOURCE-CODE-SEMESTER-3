#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

const int MAXSTACK = 10;
typedef int infotype;
struct stack{
    infotype info[MAXSTACK];
    int top;
} ;

void createStack_103032400036(stack &S);
bool isEmpty_103032400036(stack S);
bool isFull_103032400036(stack S);
void push_103032400036(stack &S, infotype x);
infotype pop_103032400036(stack &S);
int sumStack_103032400036(stack S);
#endif // STACK_H_INCLUDED
