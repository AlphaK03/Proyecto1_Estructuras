
#ifndef PRACTICA_1_STACK_H
#define PRACTICA_1_STACK_H
#include "Lista.cpp"
#include "RuntimeException.h"
template <class tipo>

class Stack {
private:
    Lista<tipo> *S;
    int n;
public:
    Stack();
    ~Stack();
    int size();
    bool empty()const;
    tipo *top() throw(StackEmpty);
    void push(tipo *e);
    void pop() throw(StackEmpty);
};


#endif //PRACTICA_1_STACK_H
