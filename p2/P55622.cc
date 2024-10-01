#include <iostream>
using namespace std;

int main(){
    int n, length=0, temp;
    cin >> n;
    temp = n;
    if (n==0) length++;
    while (temp > 0) {
        temp /= 10;
        length++;
    }
    cout << "The number of digits of " << n << " is " << length << "." << endl;
    return 0;
}