#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(){

    const size_t br_el = 5;
    int niz[br_el];

    for(int i = 0; i < br_el; i++){
        niz[i] = i;
    }

    vector <int> vek(niz, niz + br_el);
    sort(begin(niz), end(niz), [](int a, int b){return a < b;});

    for(auto &el : niz){
        el *= 5;
    }

    for(const int *p{niz}; p < niz + br_el; p++){
        cout << *p << endl;
    }
    return 0;
}