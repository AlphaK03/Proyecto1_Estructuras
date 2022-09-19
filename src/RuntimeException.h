//
// Created by Paul on 29/8/2022.
//

#ifndef PRACTICA_1_RUNTIMEEXCEPTION_H
#define PRACTICA_1_RUNTIMEEXCEPTION_H

#include <iostream>
using namespace std;

class RuntimeExcetion{
private:
    string errorMsg;
public:
    RuntimeExcetion(const string& err){
        errorMsg=err;}

    string getMenssage()const {
            return errorMsg;
        }

};

class StackEmpty:public RuntimeExcetion{
public:
    StackEmpty(const string &err): RuntimeExcetion(err){

    }
};

#endif //PRACTICA_1_RUNTIMEEXCEPTION_H
