#ifndef _RADNIK_H
#define _RADNIK_H
#include <string>

using namespace std;

struct radnik{
    string ime;
    int starost;
    double plata;
};

bool poImenu(const radnik &a, const radnik &b);
bool poPlati(const radnik &a, const radnik &b);

#endif