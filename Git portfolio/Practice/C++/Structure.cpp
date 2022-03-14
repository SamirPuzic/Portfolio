#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct employee{
    string name;
    int age;
    double salary;
};

bool byName(const employee &a, const employee &b){
    return a.name < b.name;
}

bool bySalary(const employee &a, const employee &b){
    return a.salary < b.salary;
}

int main(){

    employee first;
    employee second;

    cout<<"Enter name, age and salary for first employee:"<<endl;
    cin>>first.name>>first.age>>first.salary;

    cout<<"Enter name, age and salary for second employee:"<<endl;
    cin>>second.name>>second.age>>second.salary;

    vector <employee> employee_list;
    employee_list.push_back(first);
    employee_list.push_back(second);

    sort(begin(employee_list), end(employee_list), byName);

    for(auto k=0; k < employee_list.size(); k++){
        cout<<employee_list[k].name<<" "<<employee_list[k].salary<<endl;
    }

    return 0;
}