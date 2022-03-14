#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;

    cout << "Enter name: ";
    string name;
    cin >> name;
    const string greeting("Hello, " + name + "!");
    const auto n = greeting.size();

    const string line(n, '*');
    const string empty(n, ' ');
    const auto first_last = "**" + line + "**";
    const auto second_fourth = "* " + empty + " *";

    cout << first_last << endl;
    cout << second_fourth << endl;
    cout << "* " << greeting << " *"<< endl;
    cout << second_fourth << endl;
    cout << first_last << endl;

    return 0;
}