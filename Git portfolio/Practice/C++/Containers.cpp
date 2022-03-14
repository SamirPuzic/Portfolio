#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> lista;
    double x;
    double suma = 0.;
    while (cin >> x)
    {
        lista.push_back(x);
        suma += x;
    }
    sort(begin(lista), end(lista));

    typedef decltype(lista.size()) vec_velicina;
    vec_velicina br_elemenata = lista.size();
    vec_velicina sredina = br_elemenata/2;
    if (br_elemenata == 0)
    {
        cout << "Unijeli ste prazan niz" << endl;
        return 1;
    }
    double median = (br_elemenata % 2 == 0) ? (lista[sredina] + lista[sredina - 1]) / 2 : lista[sredina];
    cout << "Prosjecna vrijednost:\t" << suma / br_elemenata << endl;
    cout << "Arit. sredina:\t" << median << endl;
    return 0;
}
