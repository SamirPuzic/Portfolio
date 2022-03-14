#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    list<string> lista;
    string x;
    while (cin >> x){
        lista.push_back(x);
    }
    lista.sort();
    auto it = lista.begin();
    while ( it != lista.end()){
        cout << *it << endl;
        ++it;
    }
    return 0;
}