
#include "Lista.h"

template<class tipo>
Lista<tipo>::Lista(){
    raiz=new Nodo<tipo>;
}


template<class tipo>
Lista<tipo>::~Lista() {
    Nodo<tipo> *temp;
    Nodo<tipo> *anterior;
    if (raiz->getSiguente()== nullptr){
        delete raiz;
    }
    else{
        while (raiz->getSiguente()!= nullptr){
            temp=raiz;
            while (temp->getSiguente()!= nullptr){
                anterior=temp;
                temp= temp->getSiguente();
            }
            anterior->setSiguente(nullptr);
            delete temp;
        }

    }
        cout<<"lista borrada";

}
    template<class tipo>
    string Lista<tipo>::toString() {
        stringstream s;
        Nodo<tipo> *temporal=raiz;
        if (temporal->getSiguente()== nullptr){
            s<<"Lista vacia"<<endl;
        }
        else{
            temporal=temporal->getSiguente();
            do{
                s<<temporal->getDatos()->toString();
                s<<"   ";
                temporal=temporal->getSiguiente();
            }while(temporal!= nullptr);
                s<<"Null"<<endl;
        }
        return s.str();
    }

    template<class tipo>
    void Lista<tipo>::agregarInicio(tipo *p) {

        Nodo<tipo> *nuevo=new Nodo<tipo>;
        nuevo->setDatos(p);
        nuevo->setSiguente(raiz->getSiguente());
        raiz->setSiguente(nuevo);

    }

    template<class tipo>
    tipo * Lista<tipo>::inicio() {
        Nodo<tipo> *temp=raiz;
        if (temp->getSiguente() != nullptr){
            temp=temp->getSiguente();
            return temp->getDatos();
        }
        return nullptr;
    }

    template <class tipo>
    void Lista<tipo>::borraInicio() {
        Nodo<tipo> *temp=raiz;
        if(temp->getSiguente()!= nullptr){
            temp=temp->getSiguente();
            raiz->setSiguente(temp->getSiguente());
            delete temp;
        }
    }

template<class tipo>
void Lista<tipo>::agregarFinal(tipo * p) {
    auto *nuevo = new Nodo<tipo>;
    nuevo->getSiguente()->setDatos(p);
    nuevo->getSiguente()->setSiguente(new Nodo<tipo>());
    nuevo->setSiguente(new Nodo<tipo>());
}

template<class tipo>
bool Lista<tipo>::borrar() {
    raiz = new Nodo<tipo>();
    raiz->setSiguente(new Nodo<tipo>());
}
