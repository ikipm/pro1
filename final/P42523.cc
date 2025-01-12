#include <iostream>
using namespace std;

int mcd(int a, int b){
    if (b == 0) return a;
    int r = a % b;
    return mcd(b, r);
}

int main(){
    cout << mcd(0, 10) << endl;
    return 0;
}