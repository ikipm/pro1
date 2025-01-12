#include <iostream>
#include <string>

using namespace std;

int sumDigitsInBase(int number, int base) {
    int sum = 0;
    while (number > 0) {
        sum += number % base;
        number /= base;
    }
    return sum;
}

int main() {
    int base;
    cin >> base;

    int n;
    while (cin >> n) {
        cout << n << ": " << sumDigitsInBase(n, base) << endl;
    }

    return 0;
}
