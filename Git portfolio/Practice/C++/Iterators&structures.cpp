#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct radnik{
    string ime;
    int godine;
};

int main(){
    vector <radnik> lista;
    radnik r;
    while (cin >> r.ime >> r.godine)
        lista.push_back(r);
    for (auto it = lista.begin(); it != lista.end(); it++)
        cout << (*it).ime << it->godine << endl;
    return 0;
}