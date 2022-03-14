#include "ping.cpp"

using namespace std;

int main(){
    int time;
    cout << "Host: ";
    cin >> host;
    cout << "Time: ";
    cin >> time;
    bool rez = ping(host, time);
    cout << "Rezultat je = " << rez << endl;
    return 0;
}