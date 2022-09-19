
#include "Nodo.h"

template <class tipo>
Nodo<tipo>::Nodo() {
    datos= nullptr;
    siguente= nullptr;
}

template<class tipo>
tipo *Nodo<tipo>::getDatos() const {
    return datos;
}

template<class tipo>
void Nodo<tipo>::setDatos(tipo *datos) {
    Nodo::datos=datos;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguente() const {
    return siguente;
}

template<class tipo>
void Nodo<tipo>::setSiguente(Nodo *siguente) {
    Nodo::siguente=siguente;
}


