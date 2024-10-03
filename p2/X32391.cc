#include <iostream>
using namespace std;

int main(){
    int d, n, t, ai, possitive = 0;
    cin >> d >> n >> t;
    for (int i = 0; i < t; i++) {
        cin >> ai;
        n += ai - d;
        if (n > 0) possitive++;
    }
    cout << possitive << endl;
    return 0;
}