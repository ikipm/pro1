#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    double n, ni, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ni;
        sum1 += ni*ni;
        sum2 += ni;
    }
    cout << 1/(n-1)*(sum1) - 1/(n*(n-1))*sum2*sum2 << endl;
    return 0;
}