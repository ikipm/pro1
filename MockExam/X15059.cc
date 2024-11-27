#include <iostream>
using namespace std;

// Pre: un nombre natural (n) i una seqüència de nombres naturals acabats en -1.
// Post: Mostra Si en cas que tots els nombres siguin possitius. En cas contrari, mostra no.
int main(){
    int n, j = 0;
    double i, prev;
    bool found = false;
    cin >> n;
    while (j < n and not(found)){
        cin >> i;
        prev = i;
        while (i != -1 and not(found)){
            if (prev > i) found = true;
            prev = i;
            cin >> i;
        }
        j++;
    }
    if (not(found)) cout << "Si" << endl;
    else cout << "No" << endl;
    return 0;
}