#include <iostream>
using namespace std;

struct Rellotge{
    int h;
    int m;
    int s;
};

Rellotge mitja_nit(){
    Rellotge result;
    result.h = 0;
    result.m = 0;
    result.s = 0;
    return result;
}

void incrementa(Rellotge& r){
    r.s++;
    if (r.s >= 60){ r.m++; r.s = 0;}
    if (r.m >= 60){ r.h++; r.m = 0;}
    if (r.h >= 24) r.h = r.h-24;
}

void escriu(const Rellotge& r){
    if (r.h <= 9) cout << "0" << r. h << ":";
    else cout << r.h << ":";
    if (r.m <= 9) cout << "0" << r. m << ":";
    else cout << r.m << ":";
    if (r.s <= 9) cout << "0" << r. s << endl;
    else cout << r.s << endl;
}

int main()
{
    Rellotge r = mitja_nit();
    for (int i = 0; i <= 25 * 60 * 60; ++i) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
