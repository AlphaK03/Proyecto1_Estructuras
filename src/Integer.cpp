//
// Created by Jennifer Lobo on 17/9/2022.
//

#include "Integer.h"

Integer::Integer(const string &cadena){
    this->characters=cadena;
    size=characters.length();
    strToInt(characters);
}
Integer::Integer() {
    this->characters="";
    size=0;
}
Integer::~Integer() {}

int Integer::strToInt(std::string str){
    int number=0;
    int i=0;
    while (str[i] != '\0'){
        if(str[i]<48 || str[i]>57){
            throw RuntimeExcetion("Erro: No se pueden ingresar caracteres distintos a numeros!!");
        }
        else {
            number= number*10 + (str[i]-48);
            i++;
        }
    }
    return number;
}

const string &Integer::getCharacters() const {return characters;}

void Integer::setCharacters(const string &characters) {Integer::characters = characters; size=characters.length();}

int Integer::getSize() const {return size;}

void Integer::setSize(int size) {Integer::size = size;}

int Integer::maximo(int a, int b){
if(a>b)return a;
else return b;
}
void Integer::invertirCadena(char  cadena[]){
    int tam= strlen(cadena);
    int i;
    char  aux;
    for(i=0;i<tam/2;i++){
        aux=cadena[i];
        cadena[i]=cadena[tam-i-1];
        cadena[tam-i-1]=aux;
    }
}
string Integer::calcularSuma(char n1 [], char n2 [], char s []){
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
    invertirCadena(s);
    return s;
}

//Direct assignment
Integer &Integer::operator=(Integer &b) {
    this->setCharacters(b.getCharacters());
    this->setSize(b.getSize());
    return *this;
}

//Suma
Integer Integer::operator +=(Integer &b){
    int maxTam= maximo(this->size, b.size);
    char n1[this->size], n2[b.size], s[maxTam+1];
    for(int i=maxTam+1;i>=maxTam+1;i--){
        s[i]= '0';
    }
    for(int i=0;i< this->size;i++){
        n1[i]= this->characters[i];
    }
    for(int i=0;i< b.size;i++){
        n2[i]= b.characters[i];
    }
    this->characters= calcularSuma(n1,n2,s);
    return *this;
   /* int t = 0, s, i;
    int tamA = this->size, tamB = b.size;
    if (tamB > tamA)
        this->characters.append(tamB - tamA, 0);
    tamA = size;
    for (i = 0; i < tamA; i++) {
        if (i < tamB)
            s = (this->characters[i] + b.characters[i]) + t;
        else
            s = this->characters[i] + t;
        t = s / 10;
        this->characters[i] = (s % 10);
    }
    if (t)
        this->characters.push_back(t);
    return *this;*/
}
Integer Integer::operator+(Integer &b) {
    Integer temp;
    temp = *this;
    temp += b;
    return temp;
    /*int maxTam= maximo(this->size, b.size);
    char n1[this->size], n2[b.size], s[maxTam+1];
    for(int i=maxTam+1;i>=maxTam+1;i--){
        s[i]= '0';
    }
    for(int i=0;i< this->size;i++){
        n1[i]= this->characters[i];
    }
    for(int i=0;i< b.size;i++){
        n2[i]= b.characters[i];
    }
    this->characters= calcularSuma(n1,n2,s);
    return *this;*/
    /*string s;
    int tam1= this->characters.length();
    int tam2= b.characters.length();
    int maxTam= maximo(tam1, tam2);

    //Rellenamos de ceros
    int i;
    for (i=tam1;i<maxTam;i++) this->characters[i]='0';
    for (i=tam2;i<maxTam;i++) b.characters[i]='0';

    //Suma
    int suma, acarreo=0;
    for(i=0;i<maxTam;i++){
        suma=(this->characters[i]-'0') + (b.characters[i]-'0')+ acarreo;
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
    cout<<"s: "<<s;
    Integer result;
    result.setCharacters(s);
    result.setSize(s.length());
    return result;*/
}

//Resta
Integer Integer::operator-=(Integer &b) {
    if (this->characters < b.characters)
        throw ("UNDERFLOW");
    int tamA = this->size, tamB = b.size;
    int i, t = 0, s;
    for (i = 0; i < tamA; i++) {
        if (i < tamB)
            s = this->characters[i] - b.characters[i] + t;
        else
            s = this->characters[i] + t;
        if (s < 0)
            s += 10,t = -1;
        else
            t = 0;
        this->characters[i] = s;
    }
    while (tamA > 1 && this->characters[tamA - 1] == 0)
        this->characters.pop_back(),
                tamA--;
    return *this;
}

Integer Integer::operator-(Integer&b) {
    Integer temp;
    temp = *this;
    temp -= b;
    return temp;
}

