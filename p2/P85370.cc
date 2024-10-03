#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double c, i, t, interest;
    string interestType;
    cin >> c >> i >> t >> interestType;
    if (interestType == "simple") cout << (c*(i/100)*t)+c << endl;
    else {
        interest = c;
        for (int j = 0; j < t; j++){
            interest *= (1+i/100);
        }
        cout << interest << endl;
    }
    return 0;
}