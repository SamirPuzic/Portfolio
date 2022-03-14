#include <iostream>

using namespace std;

int main(){

    int *p_int{nullptr}, i{10}, j;
    string s("abcd");
    string *p_str{&s};

    p_int = &i;
    *p_int = 100;
    p_int = &j;
    *p_int = i;

    cout << p_str->size() << endl;
    cout << j << endl;
    cout << i << endl;

    return 0;
}

