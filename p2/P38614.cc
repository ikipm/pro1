#include <iostream>
using namespace std;

int main(){
    int n, temp, sum;
    cin >> n;
    temp = n;
    for (int i = 1; temp > 0; i++) {
        if (i%2 != 0) sum += temp%10;
        temp /= 10;
    }
    cout << n;
    if (sum%2 != 0) cout << " NO";
    cout << " ES TXATXI" << endl;
    return 0;
}