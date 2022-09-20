#include<iostream>
#include<stdlib.h>
#include<sstream>
#include "vector"
using namespace std;
#include "Integer.h"
#include "OperacionesBasicas.h"
#include "Integer.h"
#include "Lista.h"
int main() {
 Integer integer1("1007004700091777777777777777777777777777777777777778888");
 string a = integer1.getCharacters();


    vector<vector<long>> vectorPrincipal;

    while (a[0] != '\0') {
        vector<long> tempVect;
        for(int i = 0; i < 3; i++){
            if(a.empty()){
                break;
            }
            tempVect.push_back(long (a[0]) - 48);
            a.erase(a.begin());


        }
        vectorPrincipal.push_back(tempVect);
        tempVect.clear();
    }

    string prueba;
    for(auto & i : vectorPrincipal){
        for(auto vect : i){
            prueba += to_string(vect);
        }
    }


    integer1 = prueba;

    cout << integer1;



    return 0;
}
