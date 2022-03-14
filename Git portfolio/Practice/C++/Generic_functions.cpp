#include <iostream>
#include <vector>

using namespace std;

template<typename T>
T suma(const vector<T>& vec){
    T s{};
    for(const auto& el : vec)
        s += el;
    return s;
}

int main(){

    vector<int> a;
    int x;
    while(cin >> x)
       a.push_back(x);
    cout << suma(a) << endl;
    return 0;
}