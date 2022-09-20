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

    static int strToInt(std::string str);

    const string &getCharacters() const;
    void setCharacters(const string &characters);
    int getSize() const;
    void setSize(int size);

    static int maximo(int a, int b);
    static void invertirCadena(char  cadena[]);
    static string calcularSuma(char n1 [], char n2 [], char s []);

    //Direct assignment
    Integer &operator=(char* &b);

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

    friend ostream &operator<<(ostream &, const Integer &);
    friend Integer& operator+=(Integer &a, const Integer &b);
    static int length(Integer);

};


#endif //PRACTICA_1_INTEGER_H
