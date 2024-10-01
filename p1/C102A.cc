#include <iostream>
using namespace std;

int main(){
    int x, a1, b1, a2, b2;
    cin >> x >> a1 >> b1 >> a2 >> b2;
    if ((x >= a1 and x <= b1) or (x >= a2 and x <= b2)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}