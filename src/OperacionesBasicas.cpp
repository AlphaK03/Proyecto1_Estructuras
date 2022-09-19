//
// Created by Jennifer Lobo on 18/9/2022.
//

#include "OperacionesBasicas.h"

void OperacionesBasicas::invertirCadena(char  cadena[]){
    int tam= strlen(cadena);
    int i;
    char  aux;
    for(i=0;i<tam/2;i++){
        aux=cadena[i];
        cadena[i]=cadena[tam-i-1];
        cadena[tam-i-1]=aux;
    }
}

int OperacionesBasicas::maximo(int a, int b){
    if(a>b)return a;
    else return b;
}

void OperacionesBasicas::calcularSuma(char n1 [], char n2 [], char s []){
    invertirCadena(n1);
    invertirCadena(n2);

    int tam1= strlen(n1);
    int tam2= strlen(n2);
    int maxTam= maximo(tam1, tam2);

    //Rellenamos de ceros
    int i;
    for (i=tam1;i<maxTam;i++) n1[i]='0';
    for (i=tam2;i<maxTam;i++) n2[i]='0';

    //Suma
    int suma, acarreo=0;
    for(i=0;i<maxTam;i++){
        suma=(n1[i]-'0') + (n2[i]-'0')+ acarreo;
        acarreo=0;
        if(suma>=10){
            acarreo=1;
            suma=suma-10;
        }
        s[i]=suma+'0';
    }
    if(acarreo==1){
        s[i]='1';
        i++;
    }

    //Invertimos la cadena s
    invertirCadena(s);
}

