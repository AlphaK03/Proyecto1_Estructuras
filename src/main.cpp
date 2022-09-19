#include<iostream>
#include<stdlib.h>
#include<sstream>
using namespace std;
#include "Integer.h"
#include "OperacionesBasicas.h"
#include "Integer.h"
int main() {
 Integer integer1("100");
 Integer integer2("20");
 Integer integer3;
 integer3=integer1;
 cout<<"=: "<<integer3.getCharacters()<<endl;
 integer1+=integer2;
 cout<<"+=: "<<integer1.characters<<endl;
 cout<<"+: "<<(integer1+integer2).characters;


 integer1.setCharacters("3");
 integer2.setCharacters("100");
 integer1-=integer2;
 cout<<"-=: "<<integer1.characters<<endl;

    return 0;
}
