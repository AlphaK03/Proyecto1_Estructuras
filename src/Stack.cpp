
#include "Stack.h"

template <class tipo>
Stack<tipo>::Stack() :S(new Lista<tipo>), n(0){
    //S= new Lista<tipo>;
}

template<class tipo>
int Stack<tipo>::size(){
    return n;
}

template<class tipo>
bool Stack<tipo>::empty() const {
    return n==0;
}

template<class tipo>
void Stack<tipo>::push(tipo *e) {
    ++n;
    S->agregarInicio(e);
}

template <class tipo>
tipo *Stack<tipo>::top() throw(StackEmpty) {
    if(empty())
        throw StackEmpty("Top sobre un stack vacio");
    return S->inicio();
}

template <class tipo>
void Stack<tipo>::pop() throw(StackEmpty) {
    if (empty())
        throw StackEmpty("Top sobre un stack vacio");
    S->borraInicio();
    n--;
}

template <class tipo>
Stack<tipo>::~Stack<tipo>() {
    delete S;
}