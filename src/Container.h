//
// Created by Jennifer Lobo on 3/5/2022.
//

#ifndef PROGRA2_PROJECT_1_SIERRA_CONTAINER_H
#define PROGRA2_PROJECT_1_SIERRA_CONTAINER_H
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
template<class T>
class Container {
private:
    T** vec;
    int quantity;
    int size;
    int initial_pos;
    int end_pos;
public:
    Container();
    Container(int);
    virtual ~Container();
    void setSize(int);
    int getSize();
    void setQuantity(int );
    int getQuantity();
    T* getT(int);
    bool erase();
    bool erasePos(int);
    bool add(T*);
    string toString();
};
template<class T>
Container<T>::Container() {
    quantity = 0;
    size = 10;
    end_pos = 0;
    initial_pos = 0;
    vec = new T * [size];
    for (int i = 0; i < size; i++)
        vec[i] = NULL;
}
template<class T>
Container<T>::Container(int n) {
    quantity = 0;
    end_pos = 0;
    initial_pos = 0;
    size = n;
    vec = new T * [n];
    for (int i = 0; i < size; i++)
        vec[i] = NULL;
}
template<class T>
Container<T>::~Container() {
    for (int i = 0; i = end_pos; i++)
        delete vec[i];
    delete[] vec;
}
template<class T>
void Container<T>::setSize(int x) {
    this->size = x;
}
template<class T>
int Container<T>::getSize() {
    return size;
}
template<class T>
int Container<T>::getQuantity() {
    //return end_pos;
    return quantity;
}
/*template<class T>
void Container<T>::setQuantity(int x) {
    quantity=x;
}*/
template<class T>
T*  Container<T>::getT(int pos) {
    T* ptrT = nullptr;
    if (pos < end_pos && pos >= 0) {
        ptrT = vec[pos];
        return ptrT;
    }
    return NULL;
}

template<class T>
bool Container<T>::erase() {
    if (vec[initial_pos]!= nullptr) {
        vec[initial_pos]= vec[initial_pos+1];
        quantity--;
        return true;
    }

    else
        return false;
}
template<class T>
bool Container<T>::erasePos(int pos) {
    if (vec[initial_pos] != nullptr && pos < end_pos) {
        delete vec[pos];
        quantity--;
        return true;
    }
    else
        return false;
}
template<class T>
bool Container<T>::add(T* dato) {
    if (end_pos < size) {
        vec[end_pos++] = dato;
        quantity++;
        return true;
    }
    else
        return false;
}
template<class T>
string Container<T>::toString() {
    stringstream s;
    s << "**********************************"<<endl;
    if(quantity==0){
        s<<"EL vector esta vacio."<< endl;
    }
    for (int i = 0; i < quantity; i++) {
        s  << vec[i]->toString()<<endl;
    }
    s << "**********************************"<<endl;
    return s.str();
}



#endif //PROGRA2_PROJECT_1_SIERRA_CONTAINER_H
