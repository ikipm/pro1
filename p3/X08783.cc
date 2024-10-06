#include <iostream>
using namespace std;

int main(){
    int b, n, length;
    while (cin >> b >> n) {
        length = 0;
        while (n > 0) {
            n /= b;
            length++;
        }
        cout << length << endl;
    }
    return 0;
}