#include <iostream>
using namespace std;

int main(){
    int n, temp, sum;
    while (cin >> n){
        sum = 0;
        temp = n;
        while (temp > 0) {
            sum += temp%10;
            temp /= 10;
        }
        cout << "The sum of the digits of " << n << " is " << sum << "." << endl;
    }
    return 0;
}