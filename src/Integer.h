//
// Created by Jennifer Lobo on 17/9/2022.
//

#ifndef PRACTICA_1_INTEGER_H
#define PRACTICA_1_INTEGER_H

#include <iostream>
#include <cstring>
#include <string.h>
#include "RuntimeException.h"
#include "Container.h"
#include "Stack.h"
class Integer {
public:
    string characters;
    int size;
    //S= new Lista<tipo>;
    //Stack<Container<int>> digits ();

public:
    Integer(const string &cadena);

    Integer();

    virtual ~Integer();

    int strToInt(std::string str);

    const string &getCharacters() const;
    void setCharacters(const string &characters);
    int getSize() const;
    void setSize(int size);

    int maximo(int a, int b);
    void invertirCadena(char  cadena[]);
    string calcularSuma(char n1 [], char n2 [], char s []);

    //Direct assignment
    Integer &operator=(Integer &b);

    //Addition and Subtraction
    //Suma
    Integer operator +=(Integer &b);
    Integer operator+(Integer &b);
    //Resta
    Integer operator-=(Integer &);
    Integer operator-(Integer &);

    //Multiplication and Division
    friend Integer &operator*=(Integer &, const Integer &);
    friend Integer operator*(const Integer &, const Integer &);
    friend Integer &operator/=(Integer &, const Integer &);
    friend Integer operator/(const Integer &, const Integer &);

};


#endif //PRACTICA_1_INTEGER_H
