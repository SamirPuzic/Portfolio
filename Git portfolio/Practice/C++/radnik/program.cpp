#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "radnik.h"

using namespace std;

int main(){
    radnik prvi;
    radnik drugi;

    cout << "Unesite ime, starost i platu prvog radnika:" << endl;
    cin >> prvi.ime >> prvi.starost >> prvi.plata;

    cout << "Unesite ime, starost i platu drugog radnika" << endl;
    cin >> drugi.ime >> drugi.starost >> drugi.plata;

    vector<radnik>lista_radnika;
    lista_radnika.push_back(prvi);
    lista_radnika.push_back(drugi);

    sort(begin(lista_radnika), end(lista_radnika), poImenu);

    for(auto k=0; k < lista_radnika.size(); k++){
        cout << lista_radnika[k].ime << "" << lista_radnika[k].plata << endl;
    }

    return 0;
}