#include <iostream>
using namespace std;

int main(){
    int n, temp, ni, length;
    cin >> n;
    for (int i = 2; i <= 16; i++){
        temp = n;
        length = 0;
        while (temp > 0) {
            ni = temp % i;
            temp /= i;
            length++;
        }
        cout << "Base " << i << ": " << length << " cifras." << endl;
    }
    return 0;
}