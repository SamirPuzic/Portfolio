#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <double> lista;
    double x;
    while(cin >> x)
        lista.push_back(x);
    for(auto k=lista.begin(); k != lista.end(); k++){
        cout << *k << endl;
    }
    return 0;
}