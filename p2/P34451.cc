#include <iostream>
using namespace std;

int main(){
    int n, i, result = 0;
    cin >> n;
    while (cin >> i){
        if (i % n == 0) result++;
    }
    cout << result << endl;
    return 0;
}