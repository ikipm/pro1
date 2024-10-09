#include <iostream>
using namespace std;

void line(int spaces, int x) {
    for (int j = 0; j < spaces; j++) cout << " ";
    for (int j = 0; j < x; j++) cout << "X";
    cout << endl;
}

int main () {
	int n;
    while (cin >> n) {
        int n2 = n;
        for (int i = n-1; i > 0; i--) {
            line(i, n2);
            n2 += 2;
        }
        for (int i = 0; i < n; i++) {
            line(0, n2);
        }
        for (int i = 1; i < n; i++) {
            n2 -= 2;
            line(i, n2);
        }
        cout << endl;
    }
}
