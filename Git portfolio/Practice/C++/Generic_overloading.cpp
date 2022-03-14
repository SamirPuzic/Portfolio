//Copy overload element by element

#include <iostream>
#include <list>
#include <vector>

using namespace std;

template<typename T, typename U>
void my_copy(T start, T finish, U dest){
    while(start != finish){
        *dest = *start;
        ++start;
        ++dest;
    }
}

int main(){
    vector<int> v1{3, 4, 5};
    vector<int> v2(5);
    list<int> l1;

    moj_copy(begin(v1), end(v1), begin(v2));
    moj_copy(begin(v1), end(v1), front_inserter(l1));
    moj_copy(begin(l1), end(l1), back_inserter(v2));

    for(const int& el : v2){
        cout << el << " " << endl;
    }
    cout << endl;
    return 0;
}