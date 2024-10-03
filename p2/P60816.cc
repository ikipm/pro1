#include <iostream>
using namespace std;

int main(){
    int n;
    string result, hexadecimal = "0123456789ABCDEF";
    cin >> n;
    if (n == 0) result = "0";
    while (n > 0) {
        result += hexadecimal[n % 16];
        n /= 16;
    }
    cout << result << endl;
    return 0;
}