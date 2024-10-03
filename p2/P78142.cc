#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    double n, i, average;
    while (cin >> n){
        average += n;
        i++;
    }
    cout << average/i << endl;
    return 0;
}