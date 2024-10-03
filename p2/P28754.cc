#include <iostream>
using namespace std;

int main(){
    int n;
    string result;
    cin >> n;
    if (n == 0) result = "0";
    while (n > 0) {
        result += to_string(n % 2);
        n /= 2;
    }
    cout << result << endl;
    return 0;
}