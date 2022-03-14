#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<double> list;
    double x, sum = 0., median;

    while(cin >> x){
        list.push_back(x);
        sum += x;
    }

    sort(begin(list), end(list));

    typedef decltype(list.size()) vec_size;
    vec_size n = list.size();
    vec_size middle = n / 2;

    if(n == 0){
        cout << "Array is empty!!" << endl;
        return 1;
    }
    else if(n % 2 == 0){
        median = (list[middle] + list[middle-1]) / 2;
    }
    else {
        median = list[middle];
    }
    
    cout << "Average value: " << sum / n << endl;
    cout << "Aritmetic mean: " << median << endl;
    return 0;
}