
#ifndef PRACTICA_1_NODO_H
#define PRACTICA_1_NODO_H
#include <iostream>

using namespace std;
template <class tipo>

class Nodo {
private:
    tipo *datos;
    Nodo *siguente;

public:
    Nodo();
    tipo *getDatos()const;
    void setDatos(tipo *datos);
    Nodo *getSiguente() const;
    void setSiguente(Nodo *siguente);


};


#endif //PRACTICA_1_NODO_H
