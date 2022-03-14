#include <iostream>
using namespace std;

void foo(int a){
    cout<<"Varijanta 1 = "<<a<<endl;
}

void foo(char a){
    cout<<"Varijanta 2 = "<<a<<endl;
}

void foo(int a, string b){
    cout<<"Varijanta 3 = "<<a<<b<<endl;
}

int main(){
    foo(5);
    foo('x');
    foo(7, "abc");

    return 0;
}