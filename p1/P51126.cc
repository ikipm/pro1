#include <iostream>
using namespace std;

int main(){
    int a1, b1, a2, b2, max_a, min_b;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1<a2) max_a = a2;
    else max_a = a1;

    if (b1<b2) min_b = b1;
    else min_b = b2;

    if (max_a > min_b) cout << "[]" << endl;
    else cout << "[" + to_string(max_a) << "," << to_string(min_b) << "]" << endl;

    return 0;
}
