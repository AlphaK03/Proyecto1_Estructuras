
#ifndef PRACTICA_1_LISTA_H
#define PRACTICA_1_LISTA_H
#include "Nodo.cpp"
#include <sstream>

template <class tipo>

class Lista {

private:
    Nodo<tipo> *raiz;
public:
    Lista();
    ~Lista();
    string toString();
    tipo * inicio();
    void borraInicio();
    void agregarInicio(tipo*);
    void agregarFinal(tipo*);
    bool borrar();
    //bool borrar(tipo*,string &)



};




#endif //PRACTICA_1_LISTA_H
